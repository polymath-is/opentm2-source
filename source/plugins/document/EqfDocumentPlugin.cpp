/*! \file
	Copyright Notice:

	Copyright (C) 1990-2016, International Business Machines
	Corporation and others. All rights reserved
*/

#include "core\PluginManager\PluginManager.h"
#include "EqfDocumentPlugin.h"
#include "EqfDocument.h"

// some constant values
static char *pszPluginName = "EqfDocumentPlugin";
static char *pszShortDescription = "DocumentPlugin";
static char *pszLongDescription	= "This is the standard document implementation";
static char *pszVersion = "1.0";
static char *pszSupplier = "International Business Machines Corporation";

EqfDocumentPlugin::EqfDocumentPlugin()
{
	name = pszPluginName;
	shortDesc = pszShortDescription;
	longDesc = pszLongDescription;
	version = pszVersion;
	supplier = pszSupplier;
  pluginType = OtmPlugin::eDocumentType;
	usableState = OtmPlugin::eUsable;
}

EqfDocumentPlugin::~EqfDocumentPlugin()
{
}

const char* EqfDocumentPlugin::getName()
{
	return name.c_str();
}

const char* EqfDocumentPlugin::getShortDescription()
{
	return shortDesc.c_str();
}

const char* EqfDocumentPlugin::getLongDescription()
{
	return longDesc.c_str();
}

const char* EqfDocumentPlugin::getVersion()
{
	return version.c_str();
}

const char* EqfDocumentPlugin::getSupplier()
{
	return supplier.c_str();
}

OtmDocument* EqfDocumentPlugin::createDocument()
{
	EqfDocument* pDoc = new EqfDocument();
	return (OtmDocument*) pDoc;
}

OtmDocument* EqfDocumentPlugin::open(char* pszDocumentName)
{
  pszDocumentName;
	EqfDocument* pDoc = new EqfDocument();
	return (OtmDocument*) pDoc;
}

void EqfDocumentPlugin::close(OtmDocument* pDocument)
{
	EqfDocument* pDoc = (EqfDocument*) pDocument;
	delete pDoc;
}

bool EqfDocumentPlugin::destroy(OtmDocument* pDocument)
{
	EqfDocument* pDoc = (EqfDocument*) pDocument;
	delete pDoc;
	return true;
}

bool EqfDocumentPlugin::stopPlugin( bool fForce  )
{

  // TODO: check for active objects..
  bool fActiveObjects = false;

  // decline stop if we have active objects
  if ( !fForce && fActiveObjects )
  {
    return( false );
  }

  // TODO: terminate active objects, cleanup, free allocated resources

  // de-register plugin
	PluginManager *pPluginManager = PluginManager::getInstance();
	pPluginManager->deregisterPlugin( (OtmPlugin *)this );

  return( true );
}


extern "C" {
__declspec(dllexport)
USHORT registerPlugins()
{
	PluginManager::eRegRc eRc = PluginManager::eSuccess;
	PluginManager *manager = PluginManager::getInstance();
	EqfDocumentPlugin* plugin = new EqfDocumentPlugin();
	eRc = manager->registerPlugin((OtmPlugin*) plugin);
    USHORT usRC = (USHORT) eRc;
    return usRC;
}
}


extern "C" {
  __declspec(dllexport)
  unsigned short getPluginInfo( POTMPLUGININFO pPluginInfo )
  {
    strcpy( pPluginInfo->szName, pszPluginName );
    strcpy( pPluginInfo->szShortDescription, pszShortDescription );
    strcpy( pPluginInfo->szLongDescription, pszLongDescription );
    strcpy( pPluginInfo->szVersion, pszVersion );
    strcpy( pPluginInfo->szSupplier, pszSupplier );
    pPluginInfo->eType = OtmPlugin::eDocumentType;
    strcpy( pPluginInfo->szDependencies, "" );
    pPluginInfo->iMinOpenTM2Version= -1;
    return( 0 );
  }
}

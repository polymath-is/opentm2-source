//+----------------------------------------------------------------------------+
//|Copyright Notice:                                                           |
//|                                                                            |
//|      Copyright (C) 1990-2012, International Business Machines              |
//|      Corporation and others. All rights reserved                           |
//+----------------------------------------------------------------------------+


        /**
         * adb_getLogfile.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_getLogfile.h"
        
               /*
                * implmentation of the getLogfile|http://webservices.folt.de/ element
                */
           


        struct adb_getLogfile
        {
            axis2_char_t *property_Type;

            
                axutil_qname_t* qname;
            
        };


       /************************* Private Function prototypes ********************************/
        


       /************************* Function Implmentations ********************************/
        adb_getLogfile_t* AXIS2_CALL
        adb_getLogfile_create(
            const axutil_env_t *env)
        {
            adb_getLogfile_t *_getLogfile = NULL;
            
                axutil_qname_t* qname = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _getLogfile = (adb_getLogfile_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_getLogfile_t));

            if(NULL == _getLogfile)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_getLogfile, 0, sizeof(adb_getLogfile_t));

            _getLogfile->property_Type = axutil_strdup(env, "adb_getLogfile");
            
                  qname =  axutil_qname_create (env,
                        "getLogfile",
                        "http://webservices.folt.de/",
                        NULL);
                _getLogfile->qname = qname;
            

            return _getLogfile;
        }

        adb_getLogfile_t* AXIS2_CALL
        adb_getLogfile_create_with_values(
            const axutil_env_t *env)
        {
            adb_getLogfile_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_getLogfile_create(env);

            

            return adb_obj;
        }
      
        
                void* AXIS2_CALL
                adb_getLogfile_free_popping_value(
                        adb_getLogfile_t* _getLogfile,
                        const axutil_env_t *env)
                {
                    adb_getLogfile_free(_getLogfile, env);
                    return NULL;
                }
            

        axis2_status_t AXIS2_CALL
        adb_getLogfile_free(
                adb_getLogfile_t* _getLogfile,
                const axutil_env_t *env)
        {
            
            
            return adb_getLogfile_free_obj(
                _getLogfile,
                env);
            
        }

        axis2_status_t AXIS2_CALL
        adb_getLogfile_free_obj(
                adb_getLogfile_t* _getLogfile,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _getLogfile, AXIS2_FAILURE);

            if (_getLogfile->property_Type != NULL)
            {
              AXIS2_FREE(env->allocator, _getLogfile->property_Type);
            }

            
              if(_getLogfile->qname)
              {
                  axutil_qname_free (_getLogfile->qname, env);
                  _getLogfile->qname = NULL;
              }
            

            if(_getLogfile)
            {
                AXIS2_FREE(env->allocator, _getLogfile);
                _getLogfile = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_getLogfile_deserialize(
                adb_getLogfile_t* _getLogfile,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return adb_getLogfile_deserialize_obj(
                _getLogfile,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs);
            
        }

        axis2_status_t AXIS2_CALL
        adb_getLogfile_deserialize_obj(
                adb_getLogfile_t* _getLogfile,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
            axutil_qname_t *element_qname = NULL; 
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _getLogfile, AXIS2_FAILURE);

            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_getLogfile_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_getLogfile_declare_parent_namespaces(
                    adb_getLogfile_t* _getLogfile,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_getLogfile_serialize(
                adb_getLogfile_t* _getLogfile,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
                return adb_getLogfile_serialize_obj(
                    _getLogfile, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            
        }

        axiom_node_t* AXIS2_CALL
        adb_getLogfile_serialize_obj(
                adb_getLogfile_t* _getLogfile,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

             
                int next_ns_index_value = 0;
            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _getLogfile, NULL);
            
             
                    namespaces = axutil_hash_make(env);
                    next_ns_index = &next_ns_index_value;
                     
                           ns1 = axiom_namespace_create (env,
                                             "http://webservices.folt.de/",
                                             "n"); 
                           axutil_hash_set(namespaces, "http://webservices.folt.de/", AXIS2_HASH_KEY_STRING, axutil_strdup(env, "n"));
                       
                     
                    parent_element = axiom_element_create (env, NULL, "getLogfile", ns1 , &parent);
                    
                    
                    axiom_element_set_namespace(parent_element, env, ns1, parent);


            

            return parent;
        }


        


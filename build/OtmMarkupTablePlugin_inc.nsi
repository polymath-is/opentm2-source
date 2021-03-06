; Copyright (c) 2015,2016 International Business Machines
; Corporation and others.  All rights reserved.
;
; NSIS statements to include the OtmMarkupTablePlugin files.
;

SetOverwrite on
${SetOutPath} "$INSTDIR\PLUGINS\OtmMarkupTablePlugin"
${File} "PLUGINS\OtmMarkupTablePlugin\" "OtmMarkupTablePlugin.DLL"
${File} "PLUGINS\OtmMarkupTablePlugin\" "OtmMarkupTablePlugin.XML"

${SetOutPath} "$INSTDIR\PLUGINS\OtmMarkupTablePlugin\BIN"
${File} "PLUGINS\OtmMarkupTablePlugin\BIN\" "OTMBMRI.DLL"
${File} "PLUGINS\OtmMarkupTablePlugin\BIN\" "OTMHTM32.DLL"
${File} "PLUGINS\OtmMarkupTablePlugin\BIN\" "OTMJDK11.DLL"
${File} "PLUGINS\OtmMarkupTablePlugin\BIN\" "OTMMSOFC.DLL"
${File} "PLUGINS\OtmMarkupTablePlugin\BIN\" "OTMQUOTE.DLL"
${File} "PLUGINS\OtmMarkupTablePlugin\BIN\" "OTMRTF.DLL"
${File} "PLUGINS\OtmMarkupTablePlugin\BIN\" "OTMXML.DLL"
${File} "PLUGINS\OtmMarkupTablePlugin\BIN\" "OTMXMODC.DLL"
${File} "PLUGINS\OtmMarkupTablePlugin\BIN\" "UNZIP.EXE"
${File} "PLUGINS\OtmMarkupTablePlugin\BIN\" "ZIP.EXE"

${SetOutPath} "$INSTDIR\PLUGINS\OtmMarkupTablePlugin\TABLE"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMADQUO.CHR"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMADQUO.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMAJDK2.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMAMRI.CHR"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMAMRI.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMANSI.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMAQUOT.CHR"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMAQUOT.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMASCII.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMDQUOT.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMHTM32.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMJDK21.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMMSOFC.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMNJDK2.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMOPNDC.XML"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMQUOTE.CHR"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMQUOTE.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMRTF.CHR"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMRTF.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMSDLXLF.XML"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMUDQUO.CHR"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMUDQUO.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMUHTM3.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMUJDK2.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMUQUOT.CHR"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMUQUOT.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMUTF16.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMUTF8.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXAHTM.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXAHTM.XML"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXAXLF.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXAXML.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXLIFF.XML"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXML.CTL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXML.LCL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXML.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXMODC.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXMXLF.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXUHTM.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXUHTM.XML"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXUSDL.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXUXLF.TBL"
${File} "PLUGINS\OtmMarkupTablePlugin\TABLE\" "OTMXUXML.TBL"

;
; End of OtmMarkupTablePlugin section.
;

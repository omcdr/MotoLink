/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.8-dev at Wed Feb 22 22:51:25 2017. */

#include "bootloader.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

const uint32_t FlashWriteRequest_addr_default = 0u;
const uint32_t FlashReadRequest_addr_default = 0u;


const pb_field_t FlashWriteRequest_fields[5] = {
    PB_FIELD(  1, MESSAGE , REQUIRED, STATIC  , FIRST, FlashWriteRequest, header, header, &BaseHeader_fields),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, FlashWriteRequest, addr, header, &FlashWriteRequest_addr_default),
    PB_FIELD(  3, BYTES   , REQUIRED, STATIC  , OTHER, FlashWriteRequest, data, addr, 0),
    PB_FIELD(  4, MESSAGE , REQUIRED, STATIC  , OTHER, FlashWriteRequest, crc, data, &Crc_fields),
    PB_LAST_FIELD
};

const pb_field_t FlashReadRequest_fields[5] = {
    PB_FIELD(  1, MESSAGE , REQUIRED, STATIC  , FIRST, FlashReadRequest, header, header, &BaseHeader_fields),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, FlashReadRequest, addr, header, &FlashReadRequest_addr_default),
    PB_FIELD(  3, BYTES   , REQUIRED, STATIC  , OTHER, FlashReadRequest, data, addr, 0),
    PB_FIELD(  4, MESSAGE , REQUIRED, STATIC  , OTHER, FlashReadRequest, crc, data, &Crc_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(FlashWriteRequest, header) < 65536 && pb_membersize(FlashWriteRequest, crc) < 65536 && pb_membersize(FlashReadRequest, header) < 65536 && pb_membersize(FlashReadRequest, crc) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_FlashWriteRequest_FlashReadRequest)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(FlashWriteRequest, header) < 256 && pb_membersize(FlashWriteRequest, crc) < 256 && pb_membersize(FlashReadRequest, header) < 256 && pb_membersize(FlashReadRequest, crc) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_FlashWriteRequest_FlashReadRequest)
#endif


/* @@protoc_insertion_point(eof) */

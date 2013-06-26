/* header auto-generated by pidl */

#include <stdint.h>

#include "librpc/gen_ndr/misc.h"
#define dom_sid2 dom_sid
#define dom_sid28 dom_sid
#define dom_sid0 dom_sid
#ifndef _HEADER_security
#define _HEADER_security

#define SEC_MASK_GENERIC	( 0xF0000000 )
#define SEC_MASK_FLAGS	( 0x0F000000 )
#define SEC_MASK_STANDARD	( 0x00FF0000 )
#define SEC_MASK_SPECIFIC	( 0x0000FFFF )
#define SEC_GENERIC_ALL	( 0x10000000 )
#define SEC_GENERIC_EXECUTE	( 0x20000000 )
#define SEC_GENERIC_WRITE	( 0x40000000 )
#define SEC_GENERIC_READ	( 0x80000000 )
#define SEC_FLAG_SYSTEM_SECURITY	( 0x01000000 )
#define SEC_FLAG_MAXIMUM_ALLOWED	( 0x02000000 )
#define SEC_STD_DELETE	( 0x00010000 )
#define SEC_STD_READ_CONTROL	( 0x00020000 )
#define SEC_STD_WRITE_DAC	( 0x00040000 )
#define SEC_STD_WRITE_OWNER	( 0x00080000 )
#define SEC_STD_SYNCHRONIZE	( 0x00100000 )
#define SEC_STD_REQUIRED	( 0x000F0000 )
#define SEC_STD_ALL	( 0x001F0000 )
#define SEC_FILE_READ_DATA	( 0x00000001 )
#define SEC_FILE_WRITE_DATA	( 0x00000002 )
#define SEC_FILE_APPEND_DATA	( 0x00000004 )
#define SEC_FILE_READ_EA	( 0x00000008 )
#define SEC_FILE_WRITE_EA	( 0x00000010 )
#define SEC_FILE_EXECUTE	( 0x00000020 )
#define SEC_FILE_READ_ATTRIBUTE	( 0x00000080 )
#define SEC_FILE_WRITE_ATTRIBUTE	( 0x00000100 )
#define SEC_FILE_ALL	( 0x000001ff )
#define SEC_DIR_LIST	( 0x00000001 )
#define SEC_DIR_ADD_FILE	( 0x00000002 )
#define SEC_DIR_ADD_SUBDIR	( 0x00000004 )
#define SEC_DIR_READ_EA	( 0x00000008 )
#define SEC_DIR_WRITE_EA	( 0x00000010 )
#define SEC_DIR_TRAVERSE	( 0x00000020 )
#define SEC_DIR_DELETE_CHILD	( 0x00000040 )
#define SEC_DIR_READ_ATTRIBUTE	( 0x00000080 )
#define SEC_DIR_WRITE_ATTRIBUTE	( 0x00000100 )
#define SEC_REG_QUERY_VALUE	( 0x00000001 )
#define SEC_REG_SET_VALUE	( 0x00000002 )
#define SEC_REG_CREATE_SUBKEY	( 0x00000004 )
#define SEC_REG_ENUM_SUBKEYS	( 0x00000008 )
#define SEC_REG_NOTIFY	( 0x00000010 )
#define SEC_REG_CREATE_LINK	( 0x00000020 )
#define SEC_ADS_CREATE_CHILD	( 0x00000001 )
#define SEC_ADS_DELETE_CHILD	( 0x00000002 )
#define SEC_ADS_LIST	( 0x00000004 )
#define SEC_ADS_SELF_WRITE	( 0x00000008 )
#define SEC_ADS_READ_PROP	( 0x00000010 )
#define SEC_ADS_WRITE_PROP	( 0x00000020 )
#define SEC_ADS_DELETE_TREE	( 0x00000040 )
#define SEC_ADS_LIST_OBJECT	( 0x00000080 )
#define SEC_ADS_CONTROL_ACCESS	( 0x00000100 )
#define SEC_RIGHTS_FILE_READ	( SEC_STD_READ_CONTROL|SEC_STD_SYNCHRONIZE|SEC_FILE_READ_DATA|SEC_FILE_READ_ATTRIBUTE|SEC_FILE_READ_EA )
#define SEC_RIGHTS_FILE_WRITE	( SEC_STD_READ_CONTROL|SEC_STD_SYNCHRONIZE|SEC_FILE_WRITE_DATA|SEC_FILE_WRITE_ATTRIBUTE|SEC_FILE_WRITE_EA|SEC_FILE_APPEND_DATA )
#define SEC_RIGHTS_FILE_EXECUTE	( SEC_STD_SYNCHRONIZE|SEC_STD_READ_CONTROL|SEC_FILE_READ_ATTRIBUTE|SEC_FILE_EXECUTE )
#define SEC_RIGHTS_FILE_ALL	( SEC_STD_ALL|SEC_FILE_ALL )
#define SEC_RIGHTS_DIR_READ	( SEC_RIGHTS_FILE_READ )
#define SEC_RIGHTS_DIR_WRITE	( SEC_RIGHTS_FILE_WRITE )
#define SEC_RIGHTS_DIR_EXECUTE	( SEC_RIGHTS_FILE_EXECUTE )
#define SEC_RIGHTS_DIR_ALL	( SEC_RIGHTS_FILE_ALL )
#define SID_NULL	( "S-1-0-0" )
#define NAME_WORLD	( "WORLD" )
#define SID_WORLD_DOMAIN	( "S-1-1" )
#define SID_WORLD	( "S-1-1-0" )
#define SID_CREATOR_OWNER_DOMAIN	( "S-1-3" )
#define SID_CREATOR_OWNER	( "S-1-3-0" )
#define SID_CREATOR_GROUP	( "S-1-3-1" )
#define NAME_NT_AUTHORITY	( "NT AUTHORITY" )
#define SID_NT_AUTHORITY	( "S-1-5" )
#define SID_NT_DIALUP	( "S-1-5-1" )
#define SID_NT_NETWORK	( "S-1-5-2" )
#define SID_NT_BATCH	( "S-1-5-3" )
#define SID_NT_INTERACTIVE	( "S-1-5-4" )
#define SID_NT_SERVICE	( "S-1-5-6" )
#define SID_NT_ANONYMOUS	( "S-1-5-7" )
#define SID_NT_PROXY	( "S-1-5-8" )
#define SID_NT_ENTERPRISE_DCS	( "S-1-5-9" )
#define SID_NT_SELF	( "S-1-5-10" )
#define SID_NT_AUTHENTICATED_USERS	( "S-1-5-11" )
#define SID_NT_RESTRICTED	( "S-1-5-12" )
#define SID_NT_TERMINAL_SERVER_USERS	( "S-1-5-13" )
#define SID_NT_REMOTE_INTERACTIVE	( "S-1-5-14" )
#define SID_NT_THIS_ORGANISATION	( "S-1-5-15" )
#define SID_NT_SYSTEM	( "S-1-5-18" )
#define SID_NT_LOCAL_SERVICE	( "S-1-5-19" )
#define SID_NT_NETWORK_SERVICE	( "S-1-5-20" )
#define NAME_BUILTIN	( "BUILTIN" )
#define SID_BUILTIN	( "S-1-5-32" )
#define SID_BUILTIN_ADMINISTRATORS	( "S-1-5-32-544" )
#define SID_BUILTIN_USERS	( "S-1-5-32-545" )
#define SID_BUILTIN_GUESTS	( "S-1-5-32-546" )
#define SID_BUILTIN_POWER_USERS	( "S-1-5-32-547" )
#define SID_BUILTIN_ACCOUNT_OPERATORS	( "S-1-5-32-548" )
#define SID_BUILTIN_SERVER_OPERATORS	( "S-1-5-32-549" )
#define SID_BUILTIN_PRINT_OPERATORS	( "S-1-5-32-550" )
#define SID_BUILTIN_BACKUP_OPERATORS	( "S-1-5-32-551" )
#define SID_BUILTIN_REPLICATOR	( "S-1-5-32-552" )
#define SID_BUILTIN_RAS_SERVERS	( "S-1-5-32-553" )
#define SID_BUILTIN_PREW2K	( "S-1-5-32-554" )
#define DOMAIN_RID_LOGON	( 9 )
#define DOMAIN_RID_ADMINISTRATOR	( 500 )
#define DOMAIN_RID_GUEST	( 501 )
#define DOMAIN_RID_ADMINS	( 512 )
#define DOMAIN_RID_USERS	( 513 )
#define DOMAIN_RID_DOMAIN_MEMBERS	( 515 )
#define DOMAIN_RID_DCS	( 516 )
#define DOMAIN_RID_CERT_ADMINS	( 517 )
#define DOMAIN_RID_SCHEMA_ADMINS	( 518 )
#define DOMAIN_RID_ENTERPRISE_ADMINS	( 519 )
#define NT4_ACL_REVISION	( SECURITY_ACL_REVISION_NT4 )
#define SD_REVISION	( SECURITY_DESCRIPTOR_REVISION_1 )
enum sec_privilege
#ifndef USE_UINT_ENUMS
 {
	SEC_PRIV_SECURITY=1,
	SEC_PRIV_BACKUP=2,
	SEC_PRIV_RESTORE=3,
	SEC_PRIV_SYSTEMTIME=4,
	SEC_PRIV_SHUTDOWN=5,
	SEC_PRIV_REMOTE_SHUTDOWN=6,
	SEC_PRIV_TAKE_OWNERSHIP=7,
	SEC_PRIV_DEBUG=8,
	SEC_PRIV_SYSTEM_ENVIRONMENT=9,
	SEC_PRIV_SYSTEM_PROFILE=10,
	SEC_PRIV_PROFILE_SINGLE_PROCESS=11,
	SEC_PRIV_INCREASE_BASE_PRIORITY=12,
	SEC_PRIV_LOAD_DRIVER=13,
	SEC_PRIV_CREATE_PAGEFILE=14,
	SEC_PRIV_INCREASE_QUOTA=15,
	SEC_PRIV_CHANGE_NOTIFY=16,
	SEC_PRIV_UNDOCK=17,
	SEC_PRIV_MANAGE_VOLUME=18,
	SEC_PRIV_IMPERSONATE=19,
	SEC_PRIV_CREATE_GLOBAL=20,
	SEC_PRIV_ENABLE_DELEGATION=21,
	SEC_PRIV_INTERACTIVE_LOGON=22,
	SEC_PRIV_NETWORK_LOGON=23,
	SEC_PRIV_REMOTE_INTERACTIVE_LOGON=24
}
#else
 { __donnot_use_enum_sec_privilege=0x7FFFFFFF}
#define SEC_PRIV_SECURITY ( 1 )
#define SEC_PRIV_BACKUP ( 2 )
#define SEC_PRIV_RESTORE ( 3 )
#define SEC_PRIV_SYSTEMTIME ( 4 )
#define SEC_PRIV_SHUTDOWN ( 5 )
#define SEC_PRIV_REMOTE_SHUTDOWN ( 6 )
#define SEC_PRIV_TAKE_OWNERSHIP ( 7 )
#define SEC_PRIV_DEBUG ( 8 )
#define SEC_PRIV_SYSTEM_ENVIRONMENT ( 9 )
#define SEC_PRIV_SYSTEM_PROFILE ( 10 )
#define SEC_PRIV_PROFILE_SINGLE_PROCESS ( 11 )
#define SEC_PRIV_INCREASE_BASE_PRIORITY ( 12 )
#define SEC_PRIV_LOAD_DRIVER ( 13 )
#define SEC_PRIV_CREATE_PAGEFILE ( 14 )
#define SEC_PRIV_INCREASE_QUOTA ( 15 )
#define SEC_PRIV_CHANGE_NOTIFY ( 16 )
#define SEC_PRIV_UNDOCK ( 17 )
#define SEC_PRIV_MANAGE_VOLUME ( 18 )
#define SEC_PRIV_IMPERSONATE ( 19 )
#define SEC_PRIV_CREATE_GLOBAL ( 20 )
#define SEC_PRIV_ENABLE_DELEGATION ( 21 )
#define SEC_PRIV_INTERACTIVE_LOGON ( 22 )
#define SEC_PRIV_NETWORK_LOGON ( 23 )
#define SEC_PRIV_REMOTE_INTERACTIVE_LOGON ( 24 )
#endif
;

/* bitmap security_ace_flags */
#define SEC_ACE_FLAG_OBJECT_INHERIT ( 0x01 )
#define SEC_ACE_FLAG_CONTAINER_INHERIT ( 0x02 )
#define SEC_ACE_FLAG_NO_PROPAGATE_INHERIT ( 0x04 )
#define SEC_ACE_FLAG_INHERIT_ONLY ( 0x08 )
#define SEC_ACE_FLAG_INHERITED_ACE ( 0x10 )
#define SEC_ACE_FLAG_VALID_INHERIT ( 0x0f )
#define SEC_ACE_FLAG_SUCCESSFUL_ACCESS ( 0x40 )
#define SEC_ACE_FLAG_FAILED_ACCESS ( 0x80 )

enum security_ace_type
#ifndef USE_UINT_ENUMS
 {
	SEC_ACE_TYPE_ACCESS_ALLOWED=0,
	SEC_ACE_TYPE_ACCESS_DENIED=1,
	SEC_ACE_TYPE_SYSTEM_AUDIT=2,
	SEC_ACE_TYPE_SYSTEM_ALARM=3,
	SEC_ACE_TYPE_ALLOWED_COMPOUND=4,
	SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT=5,
	SEC_ACE_TYPE_ACCESS_DENIED_OBJECT=6,
	SEC_ACE_TYPE_SYSTEM_AUDIT_OBJECT=7,
	SEC_ACE_TYPE_SYSTEM_ALARM_OBJECT=8
}
#else
 { __donnot_use_enum_security_ace_type=0x7FFFFFFF}
#define SEC_ACE_TYPE_ACCESS_ALLOWED ( 0 )
#define SEC_ACE_TYPE_ACCESS_DENIED ( 1 )
#define SEC_ACE_TYPE_SYSTEM_AUDIT ( 2 )
#define SEC_ACE_TYPE_SYSTEM_ALARM ( 3 )
#define SEC_ACE_TYPE_ALLOWED_COMPOUND ( 4 )
#define SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT ( 5 )
#define SEC_ACE_TYPE_ACCESS_DENIED_OBJECT ( 6 )
#define SEC_ACE_TYPE_SYSTEM_AUDIT_OBJECT ( 7 )
#define SEC_ACE_TYPE_SYSTEM_ALARM_OBJECT ( 8 )
#endif
;

/* bitmap security_ace_object_flags */
#define SEC_ACE_OBJECT_TYPE_PRESENT ( 0x00000001 )
#define SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT ( 0x00000002 )

union security_ace_object_type {
	struct GUID type;/* [case(SEC_ACE_OBJECT_TYPE_PRESENT)] */
}/* [nodiscriminant] */;

union security_ace_object_inherited_type {
	struct GUID inherited_type;/* [case(SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT)] */
}/* [nodiscriminant] */;

struct security_ace_object {
	uint32_t flags;
	union security_ace_object_type type;/* [switch_is(flags&SEC_ACE_OBJECT_TYPE_PRESENT)] */
	union security_ace_object_inherited_type inherited_type;/* [switch_is(flags&SEC_ACE_INHERITED_OBJECT_TYPE_PRESENT)] */
};

union security_ace_object_ctr {
	struct security_ace_object object;/* [case(SEC_ACE_TYPE_ACCESS_ALLOWED_OBJECT)] */
}/* [public,nodiscriminant] */;

struct security_ace {
	enum security_ace_type type;
	uint8_t flags;
	uint16_t size;/* [value(ndr_size_security_ace(r,ndr->flags))] */
	uint32_t access_mask;
	union security_ace_object_ctr object;/* [switch_is(type)] */
	struct dom_sid trustee;
}/* [gensize,public,nopull,nosize] */;

enum security_acl_revision
#ifndef USE_UINT_ENUMS
 {
	SECURITY_ACL_REVISION_NT4=2,
	SECURITY_ACL_REVISION_ADS=4
}
#else
 { __donnot_use_enum_security_acl_revision=0x7FFFFFFF}
#define SECURITY_ACL_REVISION_NT4 ( 2 )
#define SECURITY_ACL_REVISION_ADS ( 4 )
#endif
;

struct security_acl {
	enum security_acl_revision revision;
	uint16_t size;/* [value(ndr_size_security_acl(r,ndr->flags))] */
	uint32_t num_aces;/* [range(0,1000)] */
	struct security_ace *aces;
}/* [gensize,public,nosize] */;

enum security_descriptor_revision
#ifndef USE_UINT_ENUMS
 {
	SECURITY_DESCRIPTOR_REVISION_1=1
}
#else
 { __donnot_use_enum_security_descriptor_revision=0x7FFFFFFF}
#define SECURITY_DESCRIPTOR_REVISION_1 ( 1 )
#endif
;

/* bitmap security_descriptor_type */
#define SEC_DESC_OWNER_DEFAULTED ( 0x0001 )
#define SEC_DESC_GROUP_DEFAULTED ( 0x0002 )
#define SEC_DESC_DACL_PRESENT ( 0x0004 )
#define SEC_DESC_DACL_DEFAULTED ( 0x0008 )
#define SEC_DESC_SACL_PRESENT ( 0x0010 )
#define SEC_DESC_SACL_DEFAULTED ( 0x0020 )
#define SEC_DESC_DACL_TRUSTED ( 0x0040 )
#define SEC_DESC_SERVER_SECURITY ( 0x0080 )
#define SEC_DESC_DACL_AUTO_INHERIT_REQ ( 0x0100 )
#define SEC_DESC_SACL_AUTO_INHERIT_REQ ( 0x0200 )
#define SEC_DESC_DACL_AUTO_INHERITED ( 0x0400 )
#define SEC_DESC_SACL_AUTO_INHERITED ( 0x0800 )
#define SEC_DESC_DACL_PROTECTED ( 0x1000 )
#define SEC_DESC_SACL_PROTECTED ( 0x2000 )
#define SEC_DESC_RM_CONTROL_VALID ( 0x4000 )
#define SEC_DESC_SELF_RELATIVE ( 0x8000 )

struct security_descriptor {
	enum security_descriptor_revision revision;
	uint16_t type;
	struct dom_sid *owner_sid;/* [relative] */
	struct dom_sid *group_sid;/* [relative] */
	struct security_acl *sacl;/* [relative] */
	struct security_acl *dacl;/* [relative] */
}/* [gensize,public,flag(LIBNDR_FLAG_LITTLE_ENDIAN),nosize] */;

struct sec_desc_buf {
	uint32_t sd_size;/* [value(ndr_size_security_descriptor(sd,ndr->flags)),range(0,0x40000)] */
	struct security_descriptor *sd;/* [unique,subcontext(4)] */
}/* [public] */;

struct security_token {
	struct dom_sid *user_sid;/* [unique] */
	struct dom_sid *group_sid;/* [unique] */
	uint32_t num_sids;
	struct dom_sid **sids;/* [unique,size_is(num_sids)] */
	uint64_t privilege_mask;
}/* [public] */;

/* bitmap security_secinfo */
#define SECINFO_OWNER ( 0x00000001 )
#define SECINFO_GROUP ( 0x00000002 )
#define SECINFO_DACL ( 0x00000004 )
#define SECINFO_SACL ( 0x00000008 )
#define SECINFO_UNPROTECTED_SACL ( 0x10000000 )
#define SECINFO_UNPROTECTED_DACL ( 0x20000000 )
#define SECINFO_PROTECTED_SACL ( 0x40000000 )
#define SECINFO_PROTECTED_DACL ( 0x80000000 )

#endif /* _HEADER_security */

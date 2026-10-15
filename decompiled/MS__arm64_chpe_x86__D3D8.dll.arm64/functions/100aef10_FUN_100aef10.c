/*
 * FUN_100aef10 at 100aef10
 * undefined FUN_100aef10(void)
 * Address ranges: 100aef10-100af057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100aef10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_240 [2];
  undefined1 auStack_238 [520];
  
  iVar1 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
  if (iVar1 == 0) {
    FUN_10006560(0);
  }
  if (DAT_1013cfe8 == '\0') {
    iVar1 = FUN_100fac78();
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0x7e4) != '\0') {
        local_240[0] = 0;
        (*(code *)PTR_FUN_10134150)(&DAT_10129270,0,0,local_240);
        if (local_240[0] != 0) {
          FUN_100ff570(auStack_238,local_240[0]);
          (*(code *)PTR_FUN_10134158)(auStack_238,&DAT_1012d010);
          DAT_1013cfe4 = (*(code *)PTR_FUN_101340c4)(auStack_238);
          (*(code *)PTR_FUN_101342b0)(local_240[0]);
        }
      }
      if (DAT_1013cfd0 == '\0') {
        DAT_1013cfd0 = '\x01';
      }
      FUN_100fb680(iVar1);
    }
    DAT_1013cfe8 = '\x01';
  }
  uVar2 = 0;
  if (DAT_1013cfe4 != 0) {
    uVar2 = (*(code *)PTR_FUN_1013409c)(DAT_1013cfe4,param_1);
  }
  (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  return uVar2;
}


/*
 * FUN_100cfd50 at 100cfd50
 * undefined FUN_100cfd50(void)
 * Address ranges: 100cfd50-100cfe97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100cfd50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_240 [2];
  undefined1 auStack_238 [520];
  
  iVar1 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
  if (iVar1 == 0) {
    FUN_100071d0(0);
  }
  if (DAT_10175b4c == '\0') {
    iVar1 = FUN_1012e248();
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 0x7e4) != '\0') {
        local_240[0] = 0;
        (*(code *)PTR_FUN_1016c150)(&DAT_1015e660,0,0,local_240);
        if (local_240[0] != 0) {
          FUN_10132c70(auStack_238,local_240[0]);
          (*(code *)PTR_FUN_1016c158)(auStack_238,&DAT_10162db8);
          DAT_10175b48 = (*(code *)PTR_FUN_1016c0c8)(auStack_238);
          (*(code *)PTR_FUN_1016c2b0)(local_240[0]);
        }
      }
      if (DAT_10175b30 == '\0') {
        DAT_10175b30 = '\x01';
      }
      FUN_1012ec50(iVar1);
    }
    DAT_10175b4c = '\x01';
  }
  uVar2 = 0;
  if (DAT_10175b48 != 0) {
    uVar2 = (*(code *)PTR_FUN_1016c0a0)(DAT_10175b48,param_1);
  }
  (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  return uVar2;
}


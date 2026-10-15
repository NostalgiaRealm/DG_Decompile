/*
 * FUN_1801ef878 at 1801ef878
 * undefined FUN_1801ef878(void)
 * Address ranges: 1801ef878-1801ef97b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801ef878(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined1 *param_5,int param_6)

{
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  uint local_40 [4];
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (param_6 != 1) {
    return 0;
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  uVar5 = (*extraout_x11)(param_2,param_3,param_4,0);
  iVar4 = FUN_180222cb8(uVar5,&DAT_180236e78);
  if (iVar4 == 0) {
    bVar2 = true;
  }
  else {
    iVar4 = FUN_180222cb8(uVar5,s_false_180236e8c);
    if (iVar4 == 0) {
      *param_5 = 0;
      return 1;
    }
    local_40[0] = 0;
    (*(code *)puVar1)(0x180224000);
    cVar3 = (*extraout_x11_00)(param_2,param_3,param_4,0,local_40);
    if (cVar3 == '\0') {
      return 0;
    }
    if (1 < local_40[0]) {
      return 0;
    }
    bVar2 = local_40[0] != 0;
  }
  *param_5 = bVar2;
  return 1;
}


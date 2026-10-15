/*
 * FUN_10064290 at 10064290
 * undefined FUN_10064290(void)
 * Address ranges: 10064290-100643db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10064290(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  undefined4 *local_40;
  undefined1 auStack_3c [12];
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_3c);
  iVar1 = -0x7ff8ffa9;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    iVar1 = -0x7ffbfef0;
    if (param_4 == 0) {
      iVar1 = -0x7ff8fff2;
      puVar2 = (undefined4 *)FUN_1004f120(param_2,*(undefined4 *)(param_1 + 0x90));
      local_40 = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        iVar1 = FUN_10065590(puVar2,0);
        if ((iVar1 == 0) && (iVar1 = FUN_100654f0(puVar2,&DAT_1009c4e0,param_3), -1 < iVar1)) {
          uVar4 = FUN_100059f0(param_1 + 0xb4,&local_40);
          if ((uVar4 & 1) == 0) {
            iVar1 = -0x7ff8fff2;
            uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(uVar3);
            *param_3 = 0;
          }
          else {
            iVar1 = 0;
          }
        }
        else if (iVar1 < 0) {
          *puVar2 = &PTR_FUN_1009ca40;
          FUN_10081d50(puVar2,0xa4);
        }
      }
    }
  }
  FUN_10096790(auStack_3c);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar1;
}


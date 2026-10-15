/*
 * FUN_10064030 at 10064030
 * undefined FUN_10064030(void)
 * Address ranges: 10064030-1006422b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10064030(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5,
                undefined4 param_6,int param_7)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  uint local_50;
  undefined1 auStack_4c [4];
  undefined8 local_48;
  
  iVar3 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar3 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_4c);
  iVar3 = -0x7ff8ffa9;
  if (((param_5 != (undefined4 *)0x0) && (*param_5 = 0, param_4 != 0)) &&
     (iVar3 = -0x7ffbfef0, param_7 == 0)) {
    iVar3 = -0x7ff8fff2;
    uVar4 = FUN_1004f260(*(undefined4 *)(*(int *)(param_1 + 0x94) + 8),param_3,
                         *(undefined4 *)(param_1 + 0x90),param_4);
    local_50 = uVar4;
    if (uVar4 != 0) {
      iVar3 = FUN_100675c0(uVar4,param_2,param_6);
      pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if (-1 < iVar3) {
        if ((*(uint *)(uVar4 + 0x70) & 0x10800) == 0x10000) {
          local_48 = 0;
          puVar7 = (undefined4 *)(uVar4 + 0x10);
          uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          cVar2 = (*extraout_w11)(uVar5,*puVar7,&local_48);
          if (cVar2 == '\0') {
            iVar3 = -0x7789fe84;
          }
        }
        if (-1 < iVar3) {
          iVar3 = FUN_100672a0(uVar4,param_2,param_5);
          if (-1 < iVar3) {
            uVar6 = FUN_100059f0(param_1 + 0xcc,&local_50);
            if ((uVar6 & 1) == 0) {
              iVar3 = -0x7ff8fff2;
              uVar5 = (*pcVar1)();
              (*extraout_w11_00)(uVar5);
              *param_5 = 0;
            }
            else {
              iVar3 = 0;
            }
            goto LAB_100641f0;
          }
          FUN_10066f20(uVar4);
        }
      }
      FUN_10066eb0(uVar4);
      FUN_10081d50(uVar4,0x13c);
    }
  }
LAB_100641f0:
  FUN_10096790(auStack_4c);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar3;
}


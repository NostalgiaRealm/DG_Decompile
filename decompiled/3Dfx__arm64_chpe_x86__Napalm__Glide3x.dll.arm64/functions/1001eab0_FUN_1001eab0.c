/*
 * FUN_1001eab0 at 1001eab0
 * undefined FUN_1001eab0(void)
 * Address ranges: 1001eab0-1001ec57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1001eab0(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6,uint param_7,
            int param_8,int param_9,undefined4 param_10,undefined1 param_11,undefined4 param_12,
            undefined1 param_13)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_58 [4];
  undefined8 local_54;
  undefined8 uStack_4c;
  
  uStack_4c = 0;
  local_54 = 0;
  uVar9 = 0;
  uVar2 = FUN_1001e5e0(param_1,1,param_2,param_5,0,param_11,auStack_58,1);
  if ((uVar2 & 1) != 0) {
    uVar4 = (ulonglong)param_3;
    uVar2 = (ulonglong)param_4;
    uVar5 = (ulonglong)param_4;
    if (((int)uStack_4c == param_5) && (uStack_4c._4_4_ == 0)) {
      uVar3 = FUN_1001b518(uStack_4c & 0xffffffff,param_2 == 7 || param_2 == 2);
      uVar6 = (uint)(uVar3 >> 3) & 0x1fffffff;
      if ((uVar3 >> 3 & 0x1fffffff) != 0) {
        if (param_8 < 0) {
          param_4 = (*(int *)(param_1 + 0x9c) - param_4) - 1;
          uVar1 = *(int *)(param_1 + 0x9c) - param_4;
          uVar2 = (ulonglong)(uVar1 - param_7);
          iVar8 = -local_54._4_4_;
        }
        else {
          uVar1 = param_4 + param_7;
          iVar8 = local_54._4_4_;
        }
        uVar10 = 0;
        iVar7 = (int)local_54 + local_54._4_4_ * param_4 + uVar6 * param_3;
        if (param_7 != 0) {
          do {
            FUN_10083b40(iVar7,param_9,param_6 * uVar6);
            uVar10 = uVar10 + 1;
            param_9 = param_9 + param_8;
            iVar7 = iVar7 + iVar8;
          } while (uVar10 < param_7);
          uVar2 = uVar2 & 0xffffffff;
        }
        uVar4 = (ulonglong)(param_3 + param_6);
        uVar5 = (ulonglong)uVar1;
        uVar9 = 1;
      }
    }
    FUN_1001e8d0(param_1,1,param_2,0,param_3,uVar2 & 0xffffffff,uVar4 & 0xffffffff,
                 uVar5 & 0xffffffff,param_13);
  }
  return uVar9;
}


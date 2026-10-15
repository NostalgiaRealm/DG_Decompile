/*
 * FUN_100561f0 at 100561f0
 * undefined FUN_100561f0(void)
 * Address ranges: 100561f0-1005630f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100561f0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_30 [16];
  
  uVar5 = 0x80070057;
  if (param_2 != (uint *)0x0) {
    iVar4 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
    if (iVar4 == 0) {
      FUN_1004bc70(0);
    }
    FUN_10096840(auStack_30);
    uVar1 = *param_2;
    iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 4);
    uVar2 = *(uint *)(iVar4 + 100);
    if ((uVar1 < uVar2) && (param_2[2] + uVar1 <= uVar2)) {
      uVar2 = param_2[1];
      uVar3 = *(uint *)(iVar4 + 0x68);
      if ((uVar2 < uVar3) && (param_2[3] + uVar2 <= uVar3)) {
        fVar6 = (float)param_2[4];
        fVar7 = (float)param_2[5];
        if ((float)param_2[5] <= fVar6) {
          fVar7 = 1.0;
          if (fVar6 + 0.001 <= 1.0) {
            fVar7 = fVar6 + 0.001;
          }
        }
        FUN_10005380(fVar6,fVar7,param_1,uVar1,uVar2,param_2[2],param_2[3]);
        uVar5 = 0;
      }
    }
    FUN_10096790(auStack_30);
    (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  }
  return uVar5;
}


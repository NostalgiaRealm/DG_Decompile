/*
 * FUN_1000ee30 at 1000ee30
 * undefined FUN_1000ee30(void)
 * Address ranges: 1000ee30-1000ef23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000ee30(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_30 [16];
  
  uVar5 = 0x8876086c;
  if (param_2 != (uint *)0x0) {
    FUN_10157b40(auStack_30);
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar1 = *param_2;
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 4);
      uVar3 = *(uint *)(iVar2 + 100);
      if ((uVar1 < uVar3) && (param_2[2] + uVar1 <= uVar3)) {
        uVar3 = param_2[1];
        uVar4 = *(uint *)(iVar2 + 0x68);
        if ((uVar3 < uVar4) && (param_2[3] + uVar3 <= uVar4)) {
          fVar6 = (float)param_2[4];
          fVar7 = (float)param_2[5];
          if ((float)param_2[5] <= fVar6) {
            fVar7 = 1.0;
            if (fVar6 + 0.001 <= 1.0) {
              fVar7 = fVar6 + 0.001;
            }
          }
          FUN_10028eb0(fVar6,fVar7,param_1,uVar1,uVar3,param_2[2],param_2[3]);
          uVar5 = 0;
        }
      }
    }
    FUN_10157a90(auStack_30);
  }
  return uVar5;
}


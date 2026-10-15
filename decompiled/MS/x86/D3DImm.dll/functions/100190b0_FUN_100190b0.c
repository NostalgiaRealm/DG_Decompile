/*
 * FUN_100190b0 at 100190b0
 * undefined __thiscall FUN_100190b0(void * this, uint param_1, undefined4 param_2, undefined4 param_3, int * param_4)
 * Address ranges: 100190b0-10019203
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100190b0(void *this,uint param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  SIZE_T SVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_1ec [484];
  int *local_8;
  
  local_8 = this;
  if (*(int *)((int)this + 8) == *(int *)((int)this + 4)) {
    uVar13 = *(int *)((int)this + 4) * 2;
    SVar9 = (SIZE_T)((ulonglong)uVar13 * 0x18);
    if ((int)((ulonglong)uVar13 * 0x18 >> 0x20) != 0) {
      SVar9 = 0xffffffff;
    }
    iVar10 = FUN_1005c789(SVar9);
    iVar3 = iVar10;
    if (iVar10 != 0) {
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        *(undefined1 *)(iVar3 + 0x10) = 0;
        iVar3 = iVar3 + 0x18;
      }
      uVar13 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          iVar3 = *(int *)this;
          uVar12 = uVar13 + 1;
          puVar1 = (undefined4 *)(iVar3 + uVar13 * 0x18);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = (undefined4 *)(iVar10 + uVar13 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          *(undefined8 *)(iVar10 + 0x10 + uVar13 * 0x18) =
               *(undefined8 *)(iVar3 + 0x10 + uVar13 * 0x18);
          uVar13 = uVar12;
        } while (uVar12 < *(uint *)((int)this + 4));
      }
      thunk_FUN_1005c76c(*(LPVOID *)this);
      *(int *)this = iVar10;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
    }
  }
  piVar8 = param_4;
  for (uVar13 = *(uint *)((int)this + 8); param_1 < uVar13; uVar13 = uVar13 - 1) {
    iVar3 = *(int *)this;
    puVar2 = (undefined4 *)(iVar3 + -0x18 + uVar13 * 0x18);
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    puVar1 = (undefined4 *)(iVar3 + uVar13 * 0x18);
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    *(undefined8 *)(iVar3 + 0x10 + uVar13 * 0x18) = *(undefined8 *)(iVar3 + -8 + uVar13 * 0x18);
  }
  iVar3 = *(int *)this;
  iVar10 = param_1 * 0x18;
  *(undefined4 *)(iVar10 + iVar3) = param_2;
  *(undefined4 *)(iVar10 + 4 + iVar3) = param_3;
  puVar11 = (undefined8 *)(*(int *)this + 8 + iVar10);
  *puVar11 = *(undefined8 *)param_4;
  *(int *)(puVar11 + 1) = param_4[2];
  uVar13 = FUN_1003072b(*param_4,(int)local_1ec);
  param_1 = 0;
  piVar4 = *(int **)(local_8[4] * 0x1510 + 0x510 + local_8[3]);
  (**(code **)(*piVar4 + 0x2c))
            (piVar4,local_1ec,uVar13,*(undefined4 *)(local_8[5] + piVar8[1] * 4),
             *(undefined4 *)(local_8[6] + piVar8[1] * 4),&param_1);
  *(uint *)(iVar10 + 0x14 + *local_8) = param_1;
  local_8[2] = local_8[2] + 1;
  return;
}


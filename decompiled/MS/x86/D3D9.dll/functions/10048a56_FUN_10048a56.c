/*
 * FUN_10048a56 at 10048a56
 * undefined __thiscall FUN_10048a56(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 10048a56-10048b35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10048a56(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 == *(int *)((int)this + 8)) {
    if (iVar2 == 0) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = iVar2 * 2;
    }
    iVar3 = FUN_100cfd89(iVar2 * 0x10 + 0x7f);
    if (iVar3 != 0) {
      uVar6 = 0;
      uVar5 = iVar3 + 0x7fU & 0xffffff80;
      if (*(int *)((int)this + 8) != 0) {
        do {
          iVar4 = uVar6 * 0x10;
          puVar7 = (undefined4 *)(*(int *)((int)this + 4) + iVar4);
          uVar6 = uVar6 + 1;
          puVar8 = (undefined4 *)(iVar4 + uVar5);
          *puVar8 = *puVar7;
          puVar8[1] = puVar7[1];
          puVar8[2] = puVar7[2];
          puVar8[3] = puVar7[3];
        } while (uVar6 < *(uint *)((int)this + 8));
      }
      thunk_FUN_100cfd6c(*(LPVOID *)this);
      *(int *)this = iVar3;
      *(uint *)((int)this + 4) = uVar5;
      *(int *)((int)this + 0xc) = iVar2;
    }
  }
  uVar5 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) != uVar5) {
    piVar1 = (int *)((int)this + 4);
    for (; param_1 < uVar5; uVar5 = uVar5 - 1) {
      puVar8 = (undefined4 *)(uVar5 * 0x10 + *piVar1);
      *puVar8 = puVar8[-4];
      puVar8[1] = puVar8[-3];
      puVar8[2] = puVar8[-2];
      puVar8[3] = puVar8[-1];
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(undefined4 *)(*piVar1 + 8 + param_1 * 0x10) = *param_4;
    *(undefined4 *)(*piVar1 + 0xc + param_1 * 0x10) = *param_5;
    iVar2 = *piVar1;
    *(undefined4 *)(iVar2 + param_1 * 0x10) = param_2;
    *(undefined4 *)(iVar2 + 4 + param_1 * 0x10) = param_3;
  }
  return;
}


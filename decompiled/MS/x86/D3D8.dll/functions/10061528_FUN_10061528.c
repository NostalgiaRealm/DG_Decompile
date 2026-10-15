/*
 * FUN_10061528 at 10061528
 * undefined __thiscall FUN_10061528(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 10061528-100615f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10061528(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 == *(int *)((int)this + 8)) {
    if (iVar2 == 0) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = iVar2 * 2;
    }
    iVar3 = FUN_100ad4a9(iVar2 << 4);
    if (iVar3 != 0) {
      uVar4 = 0;
      if (*(int *)((int)this + 8) != 0) {
        do {
          puVar6 = (undefined4 *)(iVar3 + uVar4 * 0x10);
          puVar5 = (undefined4 *)(*(int *)((int)this + 4) + uVar4 * 0x10);
          uVar4 = uVar4 + 1;
          *puVar6 = *puVar5;
          puVar6[1] = puVar5[1];
          puVar6[2] = puVar5[2];
          puVar6[3] = puVar5[3];
        } while (uVar4 < *(uint *)((int)this + 8));
      }
      thunk_FUN_100ad48c(*(LPVOID *)this);
      *(int *)this = iVar3;
      *(int *)((int)this + 4) = iVar3;
      *(int *)((int)this + 0xc) = iVar2;
    }
  }
  uVar4 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) != uVar4) {
    piVar1 = (int *)((int)this + 4);
    for (; param_1 < uVar4; uVar4 = uVar4 - 1) {
      puVar5 = (undefined4 *)(uVar4 * 0x10 + *piVar1);
      *puVar5 = puVar5[-4];
      puVar5[1] = puVar5[-3];
      puVar5[2] = puVar5[-2];
      puVar5[3] = puVar5[-1];
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


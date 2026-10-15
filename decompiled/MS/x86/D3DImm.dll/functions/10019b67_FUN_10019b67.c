/*
 * FUN_10019b67 at 10019b67
 * undefined __thiscall FUN_10019b67(void * this, uint param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 10019b67-10019c30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10019b67(void *this,uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = *(int *)((int)this + 0xc);
  if (iVar3 == *(int *)((int)this + 8)) {
    if (iVar3 == 0) {
      iVar3 = 0x10;
    }
    else {
      iVar3 = iVar3 * 2;
    }
    iVar1 = FUN_1005c789(iVar3 * 0x18);
    if (iVar1 != 0) {
      uVar4 = 0;
      if (*(int *)((int)this + 8) != 0) {
        do {
          puVar6 = (undefined4 *)(*(int *)((int)this + 4) + uVar4 * 0x18);
          puVar5 = (undefined4 *)(iVar1 + uVar4 * 0x18);
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar5 = puVar5 + 1;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)((int)this + 8));
      }
      thunk_FUN_1005c76c(*(LPVOID *)this);
      *(int *)this = iVar1;
      *(int *)((int)this + 4) = iVar1;
      *(int *)((int)this + 0xc) = iVar3;
    }
  }
  uVar4 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) != uVar4) {
    while (param_1 < uVar4) {
      puVar5 = (undefined4 *)(uVar4 * 0x18 + *(int *)((int)this + 4));
      uVar4 = uVar4 - 1;
      puVar6 = puVar5 + -6;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    puVar6 = (undefined4 *)(*(int *)((int)this + 4) + param_1 * 0x18);
    *puVar6 = *param_2;
    puVar6[1] = param_2[1];
    puVar6[2] = param_2[2];
    puVar6[3] = param_2[3];
    *(undefined4 *)(param_1 * 0x18 + 0x10 + *(int *)((int)this + 4)) = *param_3;
  }
  return;
}


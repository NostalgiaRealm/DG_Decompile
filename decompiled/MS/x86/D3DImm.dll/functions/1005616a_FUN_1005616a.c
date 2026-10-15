/*
 * FUN_1005616a at 1005616a
 * undefined __thiscall FUN_1005616a(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 1005616a-10056244
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1005616a(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

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
    iVar1 = FUN_1005c789(iVar3 << 5);
    if (iVar1 != 0) {
      uVar4 = 0;
      if (*(int *)((int)this + 8) != 0) {
        do {
          puVar6 = (undefined4 *)(*(int *)((int)this + 4) + uVar4 * 0x20);
          puVar5 = (undefined4 *)(iVar1 + uVar4 * 0x20);
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
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
      puVar5 = (undefined4 *)(uVar4 * 0x20 + *(int *)((int)this + 4));
      uVar4 = uVar4 - 1;
      puVar6 = puVar5 + -8;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    iVar1 = param_1 * 0x20;
    *(undefined4 *)(iVar1 + 8 + *(int *)((int)this + 4)) = *param_4;
    puVar6 = (undefined4 *)(*(int *)((int)this + 4) + 0x10 + iVar1);
    *puVar6 = *param_5;
    puVar6[1] = param_5[1];
    puVar6[2] = param_5[2];
    puVar6[3] = param_5[3];
    iVar3 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar1 + iVar3) = param_2;
    *(undefined4 *)(iVar1 + 4 + iVar3) = param_3;
  }
  return;
}


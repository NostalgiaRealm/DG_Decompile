/*
 * FUN_100311ac at 100311ac
 * undefined __thiscall FUN_100311ac(void * this, int param_1)
 * Address ranges: 100311ac-10031277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100311ac(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int extraout_ECX;
  uint uVar4;
  
  uVar2 = FUN_100313c3((int)this + 0x150);
  uVar3 = FUN_10031403(extraout_ECX);
  uVar2 = (*(int *)((int)this + 0x15c) + -1 + uVar2 & -uVar2) / uVar2;
  uVar3 = (*(int *)((int)this + 0x158) + -1 + uVar3 & -uVar3) / uVar3;
  iVar1 = *(int *)((int)this + 0x1a0);
  if (iVar1 == 0x31545844) {
    uVar3 = uVar3 * uVar2;
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        *(undefined4 *)(param_1 + uVar2 * 8) = 0xffff0000;
        *(undefined4 *)(param_1 + 4 + uVar2 * 8) = 0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
  }
  else if ((((iVar1 == 0x32545844) || (iVar1 == 0x33545844)) || (iVar1 == 0x34545844)) ||
          (iVar1 == 0x35545844)) {
    uVar3 = uVar3 * uVar2;
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        uVar4 = uVar2 + 1;
        *(undefined4 *)(param_1 + uVar2 * 0x10) = 0;
        *(undefined4 *)(param_1 + 4 + uVar2 * 0x10) = 0;
        *(undefined4 *)(param_1 + 8 + uVar2 * 0x10) = 0xffff0000;
        *(undefined4 *)(param_1 + 0xc + uVar2 * 0x10) = 0xffffffff;
        uVar2 = uVar4;
      } while (uVar4 < uVar3);
    }
  }
  return;
}


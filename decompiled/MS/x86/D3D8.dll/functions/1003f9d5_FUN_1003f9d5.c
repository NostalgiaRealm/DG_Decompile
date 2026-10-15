/*
 * FUN_1003f9d5 at 1003f9d5
 * undefined __thiscall FUN_1003f9d5(void * this, uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1003f9d5-1003fa4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003f9d5(void *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int extraout_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_18 = param_1;
  local_10 = param_3;
  local_14 = param_2;
  local_c = param_4;
  uVar1 = FUN_1003fc97(this,&local_18);
  if ((uVar1 == *(uint *)((int)this + 8)) ||
     (uVar2 = FUN_1002d917((void *)(*(int *)((int)this + 4) + uVar1 * 0x40),local_18,local_14,
                           local_10,local_c), (char)uVar2 == '\0')) {
    FUN_1003fbc5(this,uVar1,&local_18,(undefined4 *)&stack0x00000014);
  }
  else {
    puVar4 = (undefined4 *)&stack0x00000014;
    puVar5 = (undefined4 *)(extraout_ECX + 0x10);
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}


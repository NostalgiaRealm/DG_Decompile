/*
 * FUN_100028d5 at 100028d5
 * undefined4 __thiscall FUN_100028d5(void * this, int param_1)
 * Address ranges: 100028d5-10002900
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100028d5(void *this,int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int extraout_ECX;
  
  puVar1 = FUN_100035d8(this,param_1);
  uVar2 = *(undefined4 *)(puVar1 + 200);
  if ((*(int *)(extraout_ECX + 8) == 0) || (*(int *)(extraout_ECX + 8) == 1)) {
    uVar2 = *(undefined4 *)(DAT_100dea74 + 0x94b);
  }
  return uVar2;
}


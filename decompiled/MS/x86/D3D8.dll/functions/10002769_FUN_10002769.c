/*
 * FUN_10002769 at 10002769
 * undefined4 __thiscall FUN_10002769(void * this, int param_1)
 * Address ranges: 10002769-10002794
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10002769(void *this,int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int extraout_ECX;
  
  puVar1 = FUN_100031b7(this,param_1);
  uVar2 = *(undefined4 *)(puVar1 + 200);
  if ((*(int *)(extraout_ECX + 8) == 0) || (*(int *)(extraout_ECX + 8) == 1)) {
    uVar2 = *(undefined4 *)(DAT_100ba2b4 + 0x94b);
  }
  return uVar2;
}


/*
 * FUN_1001c4fb at 1001c4fb
 * undefined __fastcall FUN_1001c4fb(int * param_1)
 * Address ranges: 1001c4fb-1001c534
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001c4fb(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001c7a6(*(int *)(param_1[1] + 0x2964));
  if (iVar1 != -1) {
    iVar1 = (**(code **)(*param_1 + 0x2c))(iVar1);
    if (((*(byte *)(iVar1 + 0x82) & 1) != 0) && (*(char *)(iVar1 + 0x7d) != '\0')) {
      (**(code **)(*param_1 + 0x28))(0,0);
    }
  }
  return;
}


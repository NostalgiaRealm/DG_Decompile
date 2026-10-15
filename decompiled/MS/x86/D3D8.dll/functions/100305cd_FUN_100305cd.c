/*
 * FUN_100305cd at 100305cd
 * undefined __cdecl FUN_100305cd(undefined4 * param_1)
 * Address ranges: 100305cd-10030606
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_100305cd(undefined4 *param_1)

{
  void *this;
  uint uVar1;
  
  this = (void *)*param_1;
  uVar1 = param_1[2];
  FUN_1009a4ec(this,uVar1,(void *)param_1[1],(int)(param_1 + 4),param_1[3]);
  FUN_100989a6(this,uVar1,0,1,0xac3);
  return;
}


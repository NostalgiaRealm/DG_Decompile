/*
 * FUN_100dfa90 at 100dfa90
 * undefined FUN_100dfa90(void)
 * Address ranges: 100dfa90-100dfb0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100dfa90(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)&DAT_00000120;
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_2 + 0x118);
  }
  puVar2 = (undefined4 *)&DAT_0000003c;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x34);
  }
  FUN_100d44a8(*puVar1,0,*puVar2);
  puVar2 = (undefined4 *)&DAT_00000048;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_2 + 0x40);
  }
  FUN_100d45c8(*puVar1,*puVar2);
  *(undefined2 *)(param_1 + 0xc2ef) = 0x101;
  return;
}


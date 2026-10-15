/*
 * FUN_1002e27a at 1002e27a
 * uint __thiscall FUN_1002e27a(void * this, undefined4 param_1, undefined4 param_2, int * param_3)
 * Address ranges: 1002e27a-1002e33a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002e27a(void *this,undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint extraout_ECX;
  byte extraout_DL;
  uint local_1e8 [119];
  uint local_c;
  uint local_8;
  
  uVar2 = 0;
  local_8 = 0;
  uVar4 = *(uint *)((int)this + 8);
  local_c = uVar4;
  if (uVar4 != 0) {
    do {
      uVar1 = local_8;
      uVar2 = (uint)*(byte *)((int)this + local_8 + 0x9c);
      pcVar3 = FUN_1005d644(CONCAT31((int3)(uVar4 >> 8),
                                     *(undefined1 *)((int)this + uVar2 * 8 + 0x19)));
      local_1e8[uVar1 * 7] = (uint)pcVar3;
      local_1e8[uVar1 * 7 + 1] = extraout_DL & 0xf;
      local_1e8[uVar1 * 7 + 2] =
           *(uint *)(&DAT_100b25ec + (uint)*(byte *)((int)this + uVar2 * 8 + 0x18) * 4);
      local_1e8[uVar1 * 7 + 3] = (int)*(char *)((int)this + uVar2 * 8 + 0x14);
      local_1e8[uVar1 * 7 + 4] = (uint)*(byte *)((int)this + uVar2 * 8 + 0x17) << 2;
      local_1e8[uVar1 * 7 + 5] = 0;
      uVar2 = local_8 + 1;
      local_1e8[uVar1 * 7 + 6] = 0;
      uVar4 = extraout_ECX;
      local_8 = uVar2;
    } while (uVar2 < local_c);
  }
  local_8 = 0;
  (**(code **)(*param_3 + 0x2c))(param_3,local_1e8,uVar2,param_1,param_2,&local_8);
  return local_8;
}


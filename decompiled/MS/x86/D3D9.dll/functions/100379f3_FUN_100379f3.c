/*
 * FUN_100379f3 at 100379f3
 * uint __fastcall FUN_100379f3(uint param_1, int param_2, undefined4 param_3, undefined4 param_4, int * param_5)
 * Address ranges: 100379f3-10037ac8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_100379f3(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_EDX;
  uint uVar5;
  uint uVar6;
  uint local_710 [448];
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar6 = 0;
  local_10 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  uVar3 = uVar6;
  local_c = param_2;
  local_8 = param_1;
  if (local_10 != 0) {
    do {
      uVar5 = (uint)*(byte *)(uVar4 + 0x214 + uVar6);
      pcVar2 = FUN_100733bc(CONCAT31((int3)(param_1 >> 8),*(undefined1 *)(uVar4 + 0x19 + uVar5 * 8))
                           );
      local_710[uVar6 * 7] = (uint)pcVar2;
      uVar4 = local_8;
      local_710[uVar6 * 7 + 1] = extraout_EDX & 0xf;
      bVar1 = *(byte *)(uVar4 + 0x18 + uVar5 * 8);
      uVar3 = (uint)*(char *)(uVar4 + 0x14 + uVar5 * 8);
      local_710[uVar6 * 7 + 3] = uVar3;
      local_710[uVar6 * 7 + 2] = *(uint *)(&DAT_100d5bc8 + (uint)bVar1 * 4);
      local_710[uVar6 * 7 + 4] = (uint)*(byte *)(uVar4 + 0x17 + uVar5 * 8) << 2;
      if (local_c == 0) {
        param_1 = 0;
      }
      else {
        param_1 = *(uint *)(local_c + uVar3 * 4);
      }
      uVar3 = uVar6 + 1;
      local_710[uVar6 * 7 + 5] = (uint)(param_1 != 0);
      local_710[uVar6 * 7 + 6] = param_1;
      uVar6 = uVar3;
    } while (uVar3 < local_10);
  }
  local_8 = 0;
  (**(code **)(*param_5 + 0x2c))(param_5,local_710,uVar3,param_3,param_4,&local_8);
  return local_8;
}


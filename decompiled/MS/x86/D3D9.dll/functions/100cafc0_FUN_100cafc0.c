/*
 * FUN_100cafc0 at 100cafc0
 * undefined __fastcall FUN_100cafc0(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 100cafc0-100cb0da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100cafc0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint local_b0 [15];
  uint local_74;
  uint local_70 [21];
  uint local_1c;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = param_2 - 0x14;
  local_70[1] = 0;
  local_70[0] = 0;
  local_70[2] = 0x67452301;
  local_70[3] = 0xefcdab89;
  uVar3 = local_c & 0xffffffc0;
  uVar2 = local_c * 8;
  local_70[4] = 0x98badcfe;
  local_70[5] = 0x10325476;
  local_14 = uVar2;
  FUN_100caf34(local_70,(undefined1 *)(param_1 + 0x14),uVar3);
  puVar5 = (undefined1 *)(param_1 + 0x14) + uVar3;
  local_c = local_c - uVar3;
  local_10 = 0x40 - local_c;
  if (local_c < 0x38) {
    FUN_100caf34(local_70,(undefined1 *)&local_14,4);
    uVar3 = local_c;
    if (local_c != 0) {
      FUN_100caf34(local_70,puVar5,local_c);
    }
    FUN_100cff00((undefined4 *)((int)local_70 + uVar3 + 0x1c),(undefined4 *)&DAT_100de7d8,
                 local_10 - 4);
    local_1c = (uVar2 | 4) >> 2;
    puVar4 = local_70 + 6;
    puVar6 = local_b0;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    FUN_100caf34(local_70,puVar5,local_c);
    FUN_100caf34(local_70,&DAT_100de7d8,local_10);
    FUN_100cfed0((int *)local_b0,0,0x40);
    local_74 = (uVar2 | 4) >> 2;
    local_b0[0] = uVar2;
  }
  FUN_100ca7fb((int *)(local_70 + 2),(int *)local_b0);
  *param_3 = local_70[2];
  param_3[1] = local_70[3];
  param_3[2] = local_70[4];
  param_3[3] = local_70[5];
  return;
}


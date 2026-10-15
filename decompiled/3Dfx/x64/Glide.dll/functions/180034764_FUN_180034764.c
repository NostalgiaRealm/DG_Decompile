/*
 * FUN_180034764 at 180034764
 * undefined __fastcall FUN_180034764(longlong param_1, longlong param_2)
 * Address ranges: 180034764-180034832
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034764(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0x28);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x140);
  fVar2 = *(float *)(param_2 + 0x2c);
  fVar4 = (float)*(uint *)(*(longlong *)(lVar3 + 8) + 0x9e);
  FUN_18004c7f4(*(longlong *)(lVar3 + 0x31b0),*(uint *)(lVar3 + 0x31b8),*(undefined8 *)(param_2 + 8)
                ,*(uint *)(param_2 + 0x18),*(uint *)(param_2 + 0x1c),
                fVar1 * 0.0 + *(float *)(param_2 + 0x30),fVar2 * 0.0 + *(float *)(param_2 + 0x34),
                (float)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x28) * fVar1 +
                *(float *)(param_2 + 0x30),
                (float)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x2c) * fVar2 +
                *(float *)(param_2 + 0x34),fVar4 * fVar1,fVar2 * fVar4);
  return;
}


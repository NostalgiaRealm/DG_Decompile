/*
 * FUN_180027164 at 180027164
 * undefined __fastcall FUN_180027164(longlong param_1, undefined8 * param_2)
 * Address ranges: 180027164-180027231
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180027164(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 6);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x140);
  fVar2 = *(float *)((longlong)param_2 + 0x34);
  fVar4 = (float)*(uint *)(*(longlong *)(lVar3 + 8) + 0x9e);
  FUN_1800525f0(*(longlong *)(lVar3 + 0x31b0),(ulonglong)*(uint *)(lVar3 + 0x31b8),
                (longlong *)*param_2,param_2[1],*(undefined4 *)(param_2 + 2),
                fVar1 * 0.0 + *(float *)(param_2 + 7),
                fVar2 * 0.0 + *(float *)((longlong)param_2 + 0x3c),
                (float)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x28) * fVar1 +
                *(float *)(param_2 + 7),
                (float)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x2c) * fVar2 +
                *(float *)((longlong)param_2 + 0x3c),fVar4 * fVar1,fVar2 * fVar4);
  return;
}


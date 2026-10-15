/*
 * FUN_180087bc4 at 180087bc4
 * undefined __fastcall FUN_180087bc4(undefined8 param_1, longlong param_2, longlong * param_3)
 * Address ranges: 180087bc4-180087ca8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180087bc4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  uint *puVar2;
  longlong lVar3;
  uint local_38 [12];
  
  puVar2 = (uint *)CONCAT71((int7)((ulonglong)param_1 >> 8),0xc);
  bVar1 = *(byte *)(*(longlong *)(param_2 + 0x10) + 0x441);
  if ((bVar1 & 0xc) != 0xc) {
    lVar3 = param_2;
    FUN_1800850c0(puVar2,param_2,*(uint *)(param_2 + 0x1fc),~bVar1 & 0xc,local_38);
    puVar2 = (uint *)(lVar3 + 0x20);
    FUN_1800edd10(puVar2,param_3,0x36,local_38);
  }
  FUN_180087910(puVar2,param_2,param_3,*(uint *)(param_2 + 0x1fc));
  if ((*(uint *)(param_2 + 0x1fc) & 0x3f00) == 0) {
    FUN_1800ec960(param_2 + 0x20,*(uint *)(param_2 + 0x1fc));
    *(undefined4 *)(param_2 + 0x1fc) = 0;
  }
  return;
}


/*
 * FUN_100255b5 at 100255b5
 * undefined __fastcall FUN_100255b5(uint param_1)
 * Address ranges: 100255b5-10025676
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100255b5(uint param_1)

{
  uint *puVar1;
  int *piVar2;
  LPVOID pvVar3;
  LPVOID extraout_ECX;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint local_8;
  
  local_8 = param_1;
  piVar2 = (int *)FUN_10036652(&local_8);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != 0) {
      FUN_100362d9(*piVar2);
      FUN_10060be1(extraout_ECX);
    }
    FUN_10036693(&local_8);
  }
  uVar5 = 0;
  bVar6 = DAT_1006c23c == 0;
  pvVar3 = DAT_1006c24c;
  uVar4 = DAT_1006c23c;
  if (!bVar6) {
    do {
      puVar1 = (uint *)((int)pvVar3 + uVar5 * 4);
      if (*puVar1 == param_1) {
        uVar4 = uVar4 - 1;
        pvVar3 = DAT_1006c24c;
        if (uVar4 - uVar5 != 0) {
          FUN_10060d80(puVar1,puVar1 + 1,(uVar4 - uVar5) * 4);
          pvVar3 = DAT_1006c24c;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
    bVar6 = uVar4 == 0;
    DAT_1006c23c = uVar4;
  }
  if (bVar6) {
    thunk_FUN_10060be1(DAT_100707b0);
    DAT_100707b0 = (LPVOID)0x0;
    DAT_100707b4 = 0;
    DAT_100707bc = 0;
    DAT_100707b8 = 0;
    thunk_FUN_10060be1(DAT_1006c24c);
    DAT_1006c24c = (LPVOID)0x0;
    FUN_10028fc4();
    FUN_10001cd7();
  }
  return;
}


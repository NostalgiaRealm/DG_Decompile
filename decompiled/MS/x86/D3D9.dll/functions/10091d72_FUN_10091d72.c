/*
 * FUN_10091d72 at 10091d72
 * undefined __fastcall FUN_10091d72(void * param_1)
 * Address ranges: 10091d72-10091e2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10091d72(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  FUN_100cfed0((int *)((int)param_1 + 0x68e8),0,0x380);
  uVar3 = 0;
  do {
    uVar2 = 0;
    do {
      uVar1 = (&DAT_100de74c)[uVar2 * 2];
      *(uint *)((int)param_1 + uVar2 * 4 + uVar3 * 0x38 + 0x68e8) = uVar1;
      if ((&DAT_100de748)[uVar2 * 8] != '\0') {
        FUN_10092632(param_1,uVar3,uVar2,uVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0xe);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  local_8 = 0;
  do {
    uVar3 = 0;
    do {
      uVar2 = (&DAT_100de74c)[uVar3 * 2];
      *(uint *)((int)param_1 + uVar3 * 4 + local_8 * 0x38 + 0x6c68) = uVar2;
      if (((&DAT_100de748)[uVar3 * 8] != '\0') && (uVar3 != 10)) {
        FUN_10092632(param_1,local_8 + 0x100,uVar3,uVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xe);
    local_8 = local_8 + 1;
  } while (local_8 < 5);
  return;
}


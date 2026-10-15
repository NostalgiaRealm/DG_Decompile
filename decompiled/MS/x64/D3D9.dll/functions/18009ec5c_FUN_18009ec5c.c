/*
 * FUN_18009ec5c at 18009ec5c
 * undefined __fastcall FUN_18009ec5c(longlong * param_1)
 * Address ranges: 18009ec5c-18009ecec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009ec5c(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  puVar4 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  puVar5 = *(undefined8 **)(lVar2 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_1800fbea0((undefined1 *)puVar5,0,0x400);
  }
  else {
    lVar6 = 8;
    do {
      uVar3 = puVar4[1];
      *puVar5 = *puVar4;
      puVar5[1] = uVar3;
      uVar3 = puVar4[3];
      puVar5[2] = puVar4[2];
      puVar5[3] = uVar3;
      uVar3 = puVar4[5];
      puVar5[4] = puVar4[4];
      puVar5[5] = uVar3;
      uVar3 = puVar4[7];
      puVar5[6] = puVar4[6];
      puVar5[7] = uVar3;
      uVar3 = puVar4[9];
      puVar5[8] = puVar4[8];
      puVar5[9] = uVar3;
      uVar3 = puVar4[0xb];
      puVar5[10] = puVar4[10];
      puVar5[0xb] = uVar3;
      uVar3 = puVar4[0xd];
      puVar5[0xc] = puVar4[0xc];
      puVar5[0xd] = uVar3;
      puVar1 = puVar4 + 0xe;
      uVar3 = puVar4[0xf];
      puVar4 = puVar4 + 0x10;
      puVar5[0xe] = *puVar1;
      puVar5[0xf] = uVar3;
      puVar5 = puVar5 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(undefined1 *)(lVar2 + 0x191) = 1;
  FUN_18009dcd0(lVar2,'\0','\0');
  return;
}


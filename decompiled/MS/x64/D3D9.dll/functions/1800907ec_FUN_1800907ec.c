/*
 * FUN_1800907ec at 1800907ec
 * undefined __fastcall FUN_1800907ec(longlong param_1, undefined8 * param_2)
 * Address ranges: 1800907ec-180090889
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800907ec(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + -0xd0);
  if (puVar4 != (undefined8 *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
      FUN_1800fbea0((undefined1 *)puVar4,0,0x400);
    }
    else {
      lVar3 = 8;
      do {
        uVar2 = param_2[1];
        *puVar4 = *param_2;
        puVar4[1] = uVar2;
        uVar2 = param_2[3];
        puVar4[2] = param_2[2];
        puVar4[3] = uVar2;
        uVar2 = param_2[5];
        puVar4[4] = param_2[4];
        puVar4[5] = uVar2;
        uVar2 = param_2[7];
        puVar4[6] = param_2[6];
        puVar4[7] = uVar2;
        uVar2 = param_2[9];
        puVar4[8] = param_2[8];
        puVar4[9] = uVar2;
        uVar2 = param_2[0xb];
        puVar4[10] = param_2[10];
        puVar4[0xb] = uVar2;
        uVar2 = param_2[0xd];
        puVar4[0xc] = param_2[0xc];
        puVar4[0xd] = uVar2;
        puVar1 = param_2 + 0xe;
        uVar2 = param_2[0xf];
        param_2 = param_2 + 0x10;
        puVar4[0xe] = *puVar1;
        puVar4[0xf] = uVar2;
        puVar4 = puVar4 + 0x10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    *(undefined1 *)(param_1 + 0x89) = 1;
    FUN_18008ee3c(param_1 + -0xe0,'\0');
  }
  return;
}


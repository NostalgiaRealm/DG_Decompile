/*
 * FUN_100696d9 at 100696d9
 * undefined __stdcall FUN_100696d9(int param_1, undefined4 param_2, int * param_3, char param_4)
 * Address ranges: 100696d9-10069787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100696d9(int param_1,undefined4 param_2,int *param_3,char param_4)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_100693f5(param_1);
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x4884) != '\0') {
    if (param_4 == '\0') {
      uVar3 = 0;
      uVar1 = extraout_ECX;
      do {
        if (*(int *)(param_1 + 0xec + uVar3 * 4) != 0) {
          *(uint *)(param_1 + 0x228 + uVar3 * 4) =
               *(int *)(param_1 + 0x60) << 0xe | uVar3 | 0x420300;
          FUN_100c40de(CONCAT31((int3)((uint)uVar1 >> 8),0xe4),
                       CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                                *(undefined1 *)(uVar3 + 0x10 + *(int *)(param_1 + 0x10))));
          FUN_100c3be1((int *)(param_1 + 0x18),param_3,0x36);
          uVar1 = extraout_ECX_00;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x10);
      *(undefined4 *)(param_1 + 0x50 + *(int *)(param_1 + 0x60) * 4) = 0x10;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x2b4) = 1;
      puVar4 = (undefined4 *)(param_1 + 0xec);
      puVar5 = (undefined4 *)(param_1 + 0x228);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  return;
}


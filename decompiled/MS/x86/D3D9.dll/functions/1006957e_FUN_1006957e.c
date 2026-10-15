/*
 * FUN_1006957e at 1006957e
 * undefined __stdcall FUN_1006957e(int param_1, int * param_2, int param_3)
 * Address ranges: 1006957e-100696d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006957e(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint extraout_EDX;
  uint uVar3;
  undefined4 *puVar4;
  uint local_c;
  
  puVar4 = (undefined4 *)(param_1 + 0x26c);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if ((*(char *)(*(int *)(param_1 + 0x10) + 0x4885) != '\0') && (param_3 == -1)) {
    param_3 = *(int *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x50 + param_3 * 4) = 0xd;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  local_c = 0;
  do {
    uVar1 = FUN_10069958(param_1,local_c);
    if (-1 < (int)uVar1) {
      if ((int)uVar1 < 1) {
        uVar1 = FUN_100c2e34(param_1 + 0x18,4,'\x01');
        *(uint *)(param_1 + 0x26c) = uVar1;
        uVar1 = 0;
        if (param_3 != -1) {
          uVar1 = param_3 << 0xe | 0x420300;
        }
        *(uint *)(param_1 + 0x268) = uVar1;
      }
      else {
        if (param_3 == -1) {
          uVar3 = FUN_100c2e34(param_1 + 0x18,4,'\x01');
        }
        else {
          uVar3 = extraout_EDX | uVar1 | 0x420300;
        }
        *(uint *)(param_1 + 0x26c + uVar1 * 4) = uVar3;
        FUN_10068cb2(uVar1);
        if (*(int *)(param_1 + 0x21c) == 0) {
          FUN_100c3be1((int *)(param_1 + 0x18),param_2,0x36);
        }
        else {
          FUN_100c3be1((int *)(param_1 + 0x18),param_2,0x36);
        }
      }
    }
    local_c = local_c + 1;
  } while (local_c < 0xc);
  return;
}


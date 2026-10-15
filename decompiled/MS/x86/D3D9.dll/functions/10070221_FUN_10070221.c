/*
 * FUN_10070221 at 10070221
 * undefined __stdcall FUN_10070221(int param_1, int * param_2, int param_3)
 * Address ranges: 10070221-100702df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070221(int param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (param_3 == -1) {
      uVar2 = uVar3 | 0x410200;
    }
    else {
      uVar2 = param_3 << 0xe | uVar3 | 0x420300;
    }
    *(uint *)(param_1 + 0x1ac + uVar3 * 4) = uVar2;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0xf);
  cVar1 = *(char *)(*(int *)(param_1 + 0x10) + 0x4a6c);
  if (cVar1 == '\x01') {
    uVar3 = FUN_100c2e34(param_1 + 0x18,4,'\x01');
    *(uint *)(param_1 + 0x1e8) = uVar3;
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_1 + 0x1bc);
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x1bc);
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x1b4);
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x1b8);
    do {
      *(undefined4 *)(param_1 + 0x1fc + uVar3 * 4) = *(undefined4 *)(param_1 + 0x1c0 + uVar3 * 4);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
  }
  else if (cVar1 == '\x02') {
    FUN_1006945b(param_1,param_2);
  }
  else if (cVar1 == '\x03') {
    FUN_1006957e(param_1,param_2,param_3);
  }
  return;
}


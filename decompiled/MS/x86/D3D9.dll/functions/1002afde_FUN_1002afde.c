/*
 * FUN_1002afde at 1002afde
 * int * __stdcall FUN_1002afde(int * param_1, int param_2, int param_3, uint param_4)
 * Address ranges: 1002afde-1002b0a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1002afde(int *param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint local_c;
  
  iVar2 = FUN_1002a0b7();
  if ((param_4 == 0) || ((char)iVar2 != '\0')) {
    piVar3 = (int *)(&DAT_100df4f4 + (int)param_1 * 0x228);
  }
  else {
    piVar3 = (int *)(&DAT_100df4e8 + (int)param_1 * 0x228);
  }
  piVar4 = (int *)0x0;
  param_1 = (int *)0x0;
  local_c = 0;
  if (piVar3[1] != 0) {
    piVar5 = piVar4;
    do {
      piVar8 = (int *)(*piVar3 + local_c * 0x18);
      piVar4 = piVar5;
      piVar1 = param_1;
      if ((((*piVar8 == param_2) && (piVar8[1] == param_3)) &&
          ((param_4 == 0 ||
           ((((char)iVar2 != '\0' || ((uint)piVar8[4] <= param_4)) ||
            ((uint)piVar8[4] <= param_4 + 1)))))) &&
         ((piVar4 = piVar8, piVar1 = piVar8, piVar5 != (int *)0x0 &&
          (uVar6 = (int)(param_4 - piVar5[4]) >> 0x1f, uVar7 = (int)(param_4 - piVar8[4]) >> 0x1f,
          (int)((param_4 - piVar5[4] ^ uVar6) - uVar6) <=
          (int)((param_4 - piVar8[4] ^ uVar7) - uVar7))))) {
        piVar4 = param_1;
        piVar1 = param_1;
      }
      param_1 = piVar1;
      local_c = local_c + 1;
      piVar5 = piVar4;
    } while (local_c < (uint)piVar3[1]);
  }
  return piVar4;
}


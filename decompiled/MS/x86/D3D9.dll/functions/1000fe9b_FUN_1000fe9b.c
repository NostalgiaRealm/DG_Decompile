/*
 * FUN_1000fe9b at 1000fe9b
 * undefined __fastcall FUN_1000fe9b(int param_1, int param_2, int * param_3)
 * Address ranges: 1000fe9b-1000ffb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000fe9b(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  uint local_18;
  
  uVar5 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      uVar4 = (uint)*(byte *)(param_2 + 0x214 + uVar5);
      param_3[uVar5 * 2 + 2] = -1;
      if ((*(char *)(param_2 + 0x14 + uVar4 * 8) == '\0') &&
         (uVar1 = (uint)*(byte *)(param_2 + 0x16 + uVar4 * 8) +
                  (uint)*(byte *)(param_2 + 0x17 + uVar4 * 8) * 4, (uint)param_3[1] < uVar1)) {
        param_3[1] = uVar1;
      }
      local_18 = 0;
      cVar2 = *(char *)(param_2 + 0x19 + uVar4 * 8);
      do {
        uVar3 = *(undefined4 *)(param_1 + local_18 * 4);
        cVar6 = -(cVar2 == (char)uVar3);
        cVar7 = -(cVar2 == (char)((uint)uVar3 >> 8));
        cVar8 = -(cVar2 == (char)((uint)uVar3 >> 0x10));
        cVar9 = -(cVar2 == (char)((uint)uVar3 >> 0x18));
        if (CONCAT13(cVar9,CONCAT12(cVar8,CONCAT11(cVar7,cVar6))) != 0) {
          *(undefined1 *)(param_3 + uVar5 * 2 + 3) = *(undefined1 *)(param_2 + 0x18 + uVar4 * 8);
          *(char *)((int)param_3 + uVar5 * 8 + 0xd) = (char)local_18;
          *(byte *)((int)param_3 + uVar5 * 8 + 0xe) =
               -(cVar8 != '\0') & 4U | cVar6 != '\0' | -(cVar9 != '\0') & 8U | -(cVar7 != '\0') & 2U
          ;
          param_3[uVar5 * 2 + 2] = (uint)*(byte *)(param_2 + 0x17 + uVar4 * 8);
          break;
        }
        local_18 = local_18 + 1;
      } while (local_18 < 0xc);
      *param_3 = *param_3 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 8));
  }
  return;
}


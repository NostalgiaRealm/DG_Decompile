/*
 * FUN_10051220 at 10051220
 * undefined FUN_10051220(void)
 * Address ranges: 10051220-10051383
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10051220(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = FUN_10007560(param_1);
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
    do {
      cVar2 = *(char *)(param_2 + 0x5d + uVar6 * 0xc);
      if (cVar2 != '\0') {
        iVar3 = param_3 + uVar6 * 8;
        if (*(char *)(iVar3 + 0x4c) == -1) {
          return 0x88760800;
        }
        if (*(char *)(iVar3 + 0x4d) != cVar2) {
          return 0x88760800;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 8);
  }
  else {
    uVar6 = 7;
    do {
      if (*(char *)(param_3 + 0x14 + uVar6 * 8) != -1) {
        iVar3 = param_1 + (uVar6 - 7) * 100;
        if (*(int *)(iVar3 + 0x4f8) == 1) {
          bVar4 = *(char *)(param_2 + (uVar6 - 7) * 0xc + 0x5d) ==
                  *(char *)(param_3 + uVar6 * 8 + 0x15);
        }
        else {
          if ((*(uint *)(iVar3 + 0x520) & 0x30000) == 0) {
            uVar7 = (uint)*(byte *)(param_2 + *(uint *)(iVar3 + 0x520) * 0xc + 0x5d);
            if (uVar7 == 0) {
              return 0x80004005;
            }
          }
          else {
            uVar7 = 3;
          }
          uVar1 = *(uint *)(&DAT_1009d500 + (uint)*(byte *)(iVar3 + 0x554) * 4);
          if (*(uint *)(&DAT_1009d500 + (uint)*(byte *)(iVar3 + 0x554) * 4) == 0) {
            uVar1 = uVar7;
          }
          bVar4 = uVar1 == *(byte *)(param_3 + uVar6 * 8 + 0x15);
        }
        if (!bVar4) {
          return 0x88760800;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xf);
  }
  return 0;
}


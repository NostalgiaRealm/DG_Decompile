/*
 * FUN_10089366 at 10089366
 * uint __fastcall FUN_10089366(void * param_1)
 * Address ranges: 10089366-100894c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10089366(void *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  char *pcVar4;
  undefined3 extraout_var;
  char *pcVar5;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  uint uVar9;
  undefined3 uVar10;
  byte *pbVar11;
  
  cVar7 = '\0';
  pcVar4 = *(char **)((int)param_1 + 0x24);
  while (pcVar4 != (char *)0x0) {
    cVar1 = *pcVar4;
    if ((cVar1 != '\r') && (cVar1 != '\n')) {
      uVar9 = 1;
      goto LAB_100893b0;
    }
    if ((cVar7 == '\r') && (cVar1 == '\n')) {
      *(int *)((int)param_1 + 0x30) = *(int *)((int)param_1 + 0x30) + -1;
    }
    cVar7 = *pcVar4;
    pcVar4 = (char *)FUN_10088c05((int)param_1);
    *(int *)((int)param_1 + 0x30) = *(int *)((int)param_1 + 0x30) + 1;
    *(char **)((int)param_1 + 0x24) = pcVar4;
  }
  uVar9 = (uint)*(byte *)((int)param_1 + 0x2c);
  pcVar5 = (char *)0x0;
  uVar8 = 0;
  if (*(byte *)((int)param_1 + 0x2c) != 0) {
LAB_100893b0:
    pbVar11 = (byte *)((int)param_1 + 0x2c);
    bVar6 = 0;
    pcVar5 = pcVar4;
    do {
      uVar8 = (undefined1)uVar9;
      pcVar5 = (char *)CONCAT31((int3)((uint)pcVar5 >> 8),*pbVar11 | bVar6);
      if ((*pbVar11 | bVar6) != 0) break;
      bVar2 = FUN_10088e25((int)param_1);
      pcVar5 = (char *)CONCAT31(extraout_var,bVar2);
      uVar9 = (uint)bVar2;
      uVar8 = 0;
      if (bVar2 == 0) break;
      if (*(int *)((int)param_1 + 0x40) == 0) {
        pcVar5 = (char *)0x0;
        if (*(int *)((int)param_1 + 0x38) != 0) {
          FUN_100adac0(*(undefined4 **)((int)param_1 + 0x34) + 0x400,
                       *(undefined4 **)((int)param_1 + 0x34),*(uint *)((int)param_1 + 0x38));
          *(undefined4 *)((int)param_1 + 0x3c) = *(undefined4 *)((int)param_1 + 0x38);
          pcVar5 = (char *)FUN_10089133(param_1);
          uVar9 = (uint)pcVar5 & 0xff;
        }
      }
      else {
        pcVar5 = (char *)(*(int *)((int)param_1 + 0x40) + -2);
        if (pcVar5 == (char *)0x0) {
          bVar3 = FUN_100894ca(param_1);
          cVar7 = **(char **)((int)param_1 + 0x24);
          pcVar5 = (char *)CONCAT31((int3)((uint)*(char **)((int)param_1 + 0x24) >> 8),cVar7);
          if ((cVar7 == '\r') || (cVar7 == '\n')) {
            uVar9 = (uint)CONCAT11(1,bVar2 & bVar3);
          }
          else {
            uVar9 = (uint)(bVar2 & bVar3);
          }
          if ((char)uVar9 != '\0') {
            while (bVar2 = *pbVar11 | (byte)(uVar9 >> 8),
                  pcVar5 = (char *)CONCAT31((int3)((uint)pcVar5 >> 8),bVar2), bVar2 == 0) {
              bVar2 = FUN_10088e25((int)param_1);
              pcVar5 = (char *)CONCAT31(extraout_var_00,bVar2);
              uVar10 = (undefined3)(uVar9 >> 8);
              uVar9 = CONCAT31(uVar10,bVar2);
              if (bVar2 == 0) break;
              pcVar5 = *(char **)((int)param_1 + 0x40);
              if (pcVar5 == (char *)0x2) {
                bVar3 = FUN_100894ca(param_1);
                pcVar5 = (char *)CONCAT31(extraout_var_01,bVar3);
                bVar2 = bVar2 & bVar3;
LAB_10089452:
                uVar9 = CONCAT31(uVar10,bVar2);
                if (bVar2 == 0) break;
              }
              else if (pcVar5 != (char *)0x3) {
                if (pcVar5 != (char *)0x0) {
                  uVar9 = 0;
                  break;
                }
                if (*(int *)((int)param_1 + 0x38) != 0) {
                  pcVar5 = (char *)FUN_10089133(param_1);
                  bVar2 = (byte)pcVar5;
                  goto LAB_10089452;
                }
              }
              if (*pbVar11 == 0) {
                cVar7 = **(char **)((int)param_1 + 0x24);
                pcVar5 = (char *)CONCAT31((int3)((uint)*(char **)((int)param_1 + 0x24) >> 8),cVar7);
                if ((cVar7 == '\r') || (cVar7 == '\n')) {
                  uVar9 = (uint)CONCAT11(1,(char)uVar9);
                }
                else {
                  uVar9 = uVar9 & 0xff;
                }
              }
            }
          }
        }
      }
      if (*pbVar11 == 0) {
        cVar7 = **(char **)((int)param_1 + 0x24);
        pcVar5 = (char *)CONCAT31((int3)((uint)*(char **)((int)param_1 + 0x24) >> 8),cVar7);
        if ((cVar7 == '\r') || (bVar6 = 0, cVar7 == '\n')) {
          bVar6 = 1;
        }
      }
      uVar8 = 0;
    } while ((char)uVar9 != '\0');
  }
  return CONCAT31((int3)((uint)pcVar5 >> 8),uVar8);
}


/*
 * FUN_1000cd44 at 1000cd44
 * int * __stdcall FUN_1000cd44(uint param_1, int param_2)
 * Address ranges: 1000cd44-1000cece
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1000cd44(uint param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  SIZE_T SVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint local_c;
  
  lVar2 = (ulonglong)*(uint *)(param_2 + 0x4850) * 0x14;
  SVar5 = (SIZE_T)lVar2;
  if ((int)((ulonglong)lVar2 >> 0x20) != 0) {
    SVar5 = 0xffffffff;
  }
  piVar6 = (int *)FUN_100ad4a9(SVar5);
  if (piVar6 != (int *)0x0) {
    FUN_100ada8e(piVar6,0,*(int *)(param_2 + 0x4850) * 0x14);
    puVar10 = (uint *)(param_1 + 4);
    bVar4 = false;
    iVar11 = 0;
    bVar3 = bVar4;
    do {
      while( true ) {
        uVar1 = *puVar10;
        uVar7 = uVar1 & 0xffff;
        if (0x4e < uVar7) break;
        if (uVar7 == 0x4e) {
switchD_1000cdb0_caseD_1:
          param_1 = 1;
        }
        else {
          switch(uVar7) {
          case 0:
switchD_1000cdb0_caseD_0:
            puVar10 = puVar10 + 1;
            goto LAB_1000cdf3;
          case 1:
          case 6:
          case 7:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x13:
            goto switchD_1000cdb0_caseD_1;
          case 2:
          case 5:
          case 8:
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0x11:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
            param_1 = 2;
            break;
          default:
switchD_1000cdb0_caseD_3:
            param_1 = 0;
            break;
          case 4:
            param_1 = 3;
          }
        }
        piVar8 = piVar6 + iVar11 * 5;
        *(char *)piVar8 = (char)uVar1;
        uVar1 = puVar10[1];
        local_c = 0;
        if (param_1 != 0) {
          do {
            uVar7 = puVar10[local_c + 2];
            uVar9 = FUN_1000ccdb(uVar7);
            *(short *)((int)piVar6 + local_c * 2 + iVar11 * 0x14 + 1) = (short)uVar9;
            *(bool *)((int)piVar8 + local_c + 10) = (uVar7 & 0xf000000) == 0x1000000;
            *(byte *)((int)piVar8 + local_c + 0xd) = (byte)(uVar7 >> 0xd) & 1;
            *(char *)((int)piVar8 + local_c + 7) = (char)(uVar7 >> 0x10);
            local_c = local_c + 1;
          } while (local_c < param_1);
        }
        puVar10 = puVar10 + param_1 + 2;
        if (param_1 < 3) {
          puVar12 = (undefined4 *)((int)piVar6 + (param_1 * 2 | 1) + iVar11 * 0x14);
          for (uVar7 = 3 - param_1 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 1;
          }
          for (uVar7 = (uint)((3 - param_1 & 1) != 0); uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined2 *)puVar12 = 0xffff;
            puVar12 = (undefined4 *)((int)puVar12 + 2);
          }
        }
        uVar7 = FUN_1000ccdb(uVar1);
        *(short *)((int)piVar8 + 0x11) = (short)uVar7;
        iVar11 = iVar11 + 1;
        *(byte *)(piVar8 + 4) = (byte)(uVar1 >> 0x10) & 0xf;
        bVar3 = bVar4;
      }
      if (uVar7 == 0x4f) goto switchD_1000cdb0_caseD_1;
      if (uVar7 == 0xfffe) {
        puVar10 = puVar10 + (uVar1 >> 0x10);
        goto switchD_1000cdb0_caseD_0;
      }
      if (uVar7 != 0xffff) goto switchD_1000cdb0_caseD_3;
      bVar3 = true;
      bVar4 = true;
      *(undefined1 *)(piVar6 + iVar11 * 5) = 0xff;
LAB_1000cdf3:
    } while (!bVar3);
  }
  return piVar6;
}


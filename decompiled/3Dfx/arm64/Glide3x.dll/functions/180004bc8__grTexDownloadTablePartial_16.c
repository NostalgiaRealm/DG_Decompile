/*
 * _grTexDownloadTablePartial@16 at 180004bc8
 * undefined __cdecl _grTexDownloadTablePartial@16(uint param_1, undefined8 * param_2, int param_3, int param_4)
 * Address ranges: 180004bc8-180004d33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadTablePartial_16(uint param_1,undefined8 *param_2,int param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
                    /* 0x4bc8  79  _grTexDownloadTablePartial@16
                       0x4bc8  179  grTexDownloadTablePartial */
  lVar2 = FUN_180008ce0();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar2 + 0x60));
    if (((param_1 < 3) ||
        ((param_1 == 3 &&
         (uVar1 = FUN_18000a930(lVar2), (&DAT_18006f27d)[(ulonglong)uVar1 * 0x20] != '\0')))) &&
       (0 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833))) {
      uVar1 = (param_4 - param_3) + 1;
      iVar5 = 0;
      do {
        lVar4 = *(longlong *)(lVar2 + 0x18);
        if (param_1 - 2 < 2) {
          if (param_2 != (undefined8 *)0x0) {
            thunk_FUN_1800010d8((undefined8 *)
                                (lVar4 + ((longlong)iVar5 * 0x13a + (longlong)param_3) * 4 + 0x418),
                                (undefined8 *)((longlong)param_2 + (longlong)param_3 * 4),
                                -(ulonglong)(uVar1 >> 0x1f) & 0xfffffffc00000000 |
                                (ulonglong)uVar1 << 2);
          }
        }
        else {
          if (param_1 == 0) {
            puVar3 = (undefined8 *)(lVar4 + (longlong)iVar5 * 0x4e8 + 0x338);
          }
          else {
            if (param_1 != 1) goto LAB_180004cd4;
            puVar3 = (undefined8 *)(lVar4 + (longlong)iVar5 * 0x4e8 + 0x3a8);
          }
          if (param_2 != (undefined8 *)0x0) {
            uVar8 = *param_2;
            uVar7 = param_2[3];
            uVar6 = param_2[2];
            puVar3[1] = param_2[1];
            *puVar3 = uVar8;
            puVar3[3] = uVar7;
            puVar3[2] = uVar6;
            uVar8 = param_2[4];
            uVar7 = param_2[7];
            uVar6 = param_2[6];
            puVar3[5] = param_2[5];
            puVar3[4] = uVar8;
            puVar3[7] = uVar7;
            puVar3[6] = uVar6;
            uVar8 = param_2[8];
            uVar7 = param_2[0xb];
            uVar6 = param_2[10];
            puVar3[9] = param_2[9];
            puVar3[8] = uVar8;
            puVar3[0xb] = uVar7;
            puVar3[10] = uVar6;
            uVar6 = param_2[0xc];
            puVar3[0xd] = param_2[0xd];
            puVar3[0xc] = uVar6;
          }
        }
LAB_180004cd4:
        (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x2b8))
                  (*(longlong **)(lVar2 + 0x18),iVar5,param_1,param_2,param_3,param_4 + 1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833));
    }
    FUN_1800643d0((uint *)(lVar2 + 0x60));
  }
  return;
}


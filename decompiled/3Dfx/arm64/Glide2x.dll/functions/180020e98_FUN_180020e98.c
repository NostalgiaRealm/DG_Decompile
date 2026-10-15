/*
 * FUN_180020e98 at 180020e98
 * undefined __cdecl FUN_180020e98(longlong * param_1, uint param_2, undefined4 * param_3, byte param_4)
 * Address ranges: 180020e98-1800211a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020e98(longlong *param_1,uint param_2,undefined4 *param_3,byte param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  
  (**(code **)(*(longlong *)param_1[0x630] + 0x50))((longlong *)param_1[0x630],0,2);
  if (*(int *)(param_1[0x631] + 0x54) != 4) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
    *(undefined4 *)(param_1[0x631] + 0x54) = 4;
  }
  if ((param_4 & 1) == 0) {
    FUN_180039768((undefined8 *)param_1[0x631],param_2,param_2 * 3 - 6);
    FUN_18001f7e0(param_1[0x631],param_3,param_2,0);
    iVar7 = 1;
    if (1 < (int)(param_2 - 1)) {
      do {
        **(int **)(param_1[0x631] + 0x48) = *(int *)(param_1[0x631] + 0x50) - param_2;
        *(uint *)(*(longlong *)(param_1[0x631] + 0x48) + 4) =
             (*(int *)(param_1[0x631] + 0x50) - param_2) + iVar7;
        iVar6 = (*(int *)(param_1[0x631] + 0x50) - param_2) + iVar7;
        iVar7 = iVar7 + 1;
        *(int *)(*(longlong *)(param_1[0x631] + 0x48) + 8) = iVar6 + 1;
        *(longlong *)(param_1[0x631] + 0x48) = *(longlong *)(param_1[0x631] + 0x48) + 0xc;
      } while (iVar7 < (int)(param_2 - 1));
    }
  }
  else {
    bVar5 = 0;
    uVar9 = 0;
    if (0 < (int)param_2 / 2) {
      do {
        if (bVar5 != 0) break;
        lVar4 = (-(ulonglong)((uVar9 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 |
                (ulonglong)(uVar9 << 1) << 4) - (longlong)(int)(uVar9 << 1);
        uVar9 = uVar9 + 1;
        uVar2 = param_3[lVar4 + 0xf];
        uVar3 = param_3[lVar4];
        bVar5 = -(1e+06 < ABS((float)(CONCAT17((char)((uint)uVar3 >> 0x18),
                                               CONCAT16((char)((uint)uVar3 >> 0x10),
                                                        CONCAT15((char)((uint)uVar3 >> 8),
                                                                 CONCAT14((char)uVar3,
                                                                          param_3[lVar4 + 1])))) >>
                                     0x20))) & 8U |
                -(1e+06 < ABS((float)(CONCAT17((char)((uint)uVar2 >> 0x18),
                                               CONCAT16((char)((uint)uVar2 >> 0x10),
                                                        CONCAT15((char)((uint)uVar2 >> 8),
                                                                 CONCAT14((char)uVar2,
                                                                          param_3[lVar4 + 0x10]))))
                                     >> 0x20))) & 2U |
                -(1e+06 < ABS((float)param_3[lVar4 + 1])) & 4U |
                -(1e+06 < ABS((float)param_3[lVar4 + 0x10])) & 1U;
      } while ((int)uVar9 < (int)param_2 / 2);
    }
    if ((param_2 & 1) != 0) {
      bVar5 = -(1e+06 < ABS((float)param_3[((longlong)(int)param_2 + -1) * 0xf])) & 2U |
              -(1e+06 < ABS((float)(param_3 + ((longlong)(int)param_2 + -1) * 0xf)[1])) & 1U | bVar5
      ;
    }
    iVar7 = param_2 - 1;
    if (bVar5 == 0) {
      FUN_180039768((undefined8 *)param_1[0x631],param_2,param_2 * 3 - 6);
      FUN_18001f7e0(param_1[0x631],param_3,param_2,param_4);
      iVar6 = 1;
      if (1 < iVar7) {
        do {
          **(int **)(param_1[0x631] + 0x48) = *(int *)(param_1[0x631] + 0x50) - param_2;
          *(uint *)(*(longlong *)(param_1[0x631] + 0x48) + 4) =
               (*(int *)(param_1[0x631] + 0x50) - param_2) + iVar6;
          iVar1 = (*(int *)(param_1[0x631] + 0x50) - param_2) + iVar6;
          iVar6 = iVar6 + 1;
          *(int *)(*(longlong *)(param_1[0x631] + 0x48) + 8) = iVar1 + 1;
          *(longlong *)(param_1[0x631] + 0x48) = *(longlong *)(param_1[0x631] + 0x48) + 0xc;
        } while (iVar6 < iVar7);
      }
    }
    else {
      uVar8 = 1;
      if (1 < iVar7) {
        do {
          uVar9 = (int)uVar8 + 1;
          FUN_18001fad8((longlong)param_1,param_3,param_3 + uVar8 * 0xf,
                        param_3 + ((-(ulonglong)(uVar9 >> 0x1f) & 0xfffffff000000000 |
                                   (ulonglong)uVar9 << 4) - (longlong)(int)uVar9));
          uVar8 = (ulonglong)uVar9;
        } while ((int)uVar9 < iVar7);
      }
    }
  }
  if ((*(uint *)((longlong)param_1 + 0x2b4c) >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
  (**(code **)(*(longlong *)param_1[0x630] + 0x90))();
  return;
}


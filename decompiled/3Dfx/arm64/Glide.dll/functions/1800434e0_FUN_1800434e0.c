/*
 * FUN_1800434e0 at 1800434e0
 * undefined __cdecl FUN_1800434e0(longlong param_1)
 * Address ranges: 1800434e0-18004369b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800434e0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  byte bVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  BOOL BVar6;
  int iVar7;
  HANDLE pvVar8;
  LPVOID pvVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  SIZE_T SVar13;
  uint local_40 [2];
  ULONG_PTR local_38 [2];
  _GROUP_AFFINITY _Stack_28;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    pvVar8 = GetCurrentProcess();
    BVar6 = GetProcessAffinityMask(pvVar8,local_38 + 1,local_38);
    if (BVar6 != 0) {
      pvVar8 = GetCurrentThread();
      BVar6 = GetThreadGroupAffinity(pvVar8,&_Stack_28);
      if ((BVar6 != 0) && (local_38[0] != 0)) {
        local_40[0] = 0;
        pvVar8 = GetCurrentProcess();
        (**(code **)(param_1 + 0x60))(0,0,local_40,pvVar8,0);
        local_40[0] = local_40[0] >> 5;
        if (local_40[0] != 0) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = CONCAT44(0,local_40[0]);
          SVar13 = CONCAT44(0,local_40[0]) << 5;
          if (SUB168(auVar5 * ZEXT816(0x20),8) != 0) {
            SVar13 = 0xffffffffffffffff;
          }
          pvVar9 = (LPVOID)thunk_FUN_1800609d8(SVar13);
          if (pvVar9 != (LPVOID)0x0) {
            pvVar8 = GetCurrentProcess();
            iVar7 = (**(code **)(param_1 + 0x60))(pvVar9,local_40[0] << 5,local_40,pvVar8,0);
            if (iVar7 != 0) {
              bVar12 = 0;
              local_40[0] = local_40[0] >> 5;
              uVar11 = 0;
              if (local_40[0] != 0) {
                do {
                  if ((*(WORD *)((longlong)pvVar9 + uVar11 * 0x20 + 0xc) == _Stack_28.Group) &&
                     (bVar3 = *(byte *)((longlong)pvVar9 + uVar11 * 0x20 + 0x12), bVar12 <= bVar3))
                  {
                    bVar12 = bVar3;
                  }
                  uVar1 = (int)uVar11 + 1;
                  uVar11 = (ulonglong)uVar1;
                } while (uVar1 < local_40[0]);
              }
              uVar11 = 0;
              if (local_40[0] != 0) {
                do {
                  lVar4 = uVar11 * 0x20;
                  if (*(WORD *)((longlong)pvVar9 + lVar4 + 0xc) == _Stack_28.Group) {
                    uVar10 = 1L << ((ulonglong)*(byte *)((longlong)pvVar9 + lVar4 + 0xe) & 0x3f);
                    uVar2 = uVar10;
                    if (bVar12 <= *(byte *)((longlong)pvVar9 + lVar4 + 0x12)) {
                      uVar2 = 0;
                    }
                    *(ulonglong *)(param_1 + 0x68) = uVar2 | *(ulonglong *)(param_1 + 0x68);
                    *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) | uVar10;
                  }
                  uVar1 = (int)uVar11 + 1;
                  uVar11 = (ulonglong)uVar1;
                } while (uVar1 < local_40[0]);
              }
            }
          }
          FUN_180060a18(pvVar9);
        }
      }
    }
  }
  return;
}


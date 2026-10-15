/*
 * FUN_100a58a9 at 100a58a9
 * uint * __thiscall FUN_100a58a9(void * this, int * param_1, int param_2, uint * param_3)
 * Address ranges: 100a58a9-100a5a35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall FUN_100a58a9(void *this,int *param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint local_c0 [14];
  uint local_88 [14];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c [4];
  int local_2c;
  undefined8 local_28;
  LPCRITICAL_SECTION local_20;
  int local_1c;
  uint local_18;
  void *local_14;
  int local_10;
  uint *local_c;
  
  local_20 = (LPCRITICAL_SECTION)((int)this + 0x18);
  local_14 = this;
  EnterCriticalSection(local_20);
  local_c = (uint *)0x0;
  local_28 = FUN_100a55e7((int *)param_3);
  local_1c = (int)((ulonglong)local_28 >> 0x20);
  local_18 = (uint)local_28;
  piVar4 = (int *)FUN_1008075b((void *)((int)this + 0x34),(uint *)&local_28);
  iVar2 = param_2;
  if (piVar4 != (int *)0x0) {
    piVar5 = local_3c;
    for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar5 = *param_1;
      param_1 = param_1 + 1;
      piVar5 = piVar5 + 1;
    }
    iVar7 = local_3c[3];
    if (local_3c[3] == 0) {
      iVar7 = 1;
    }
    if (local_2c == 0) {
      local_2c = 1;
    }
    puVar9 = param_3;
    puVar11 = local_88;
    local_10 = local_2c;
    for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    if (local_88[2] == 0 && local_88[3] == 0) {
      local_88[2] = 0x10000;
      local_88[3] = 0;
    }
    piVar5 = (int *)*piVar4;
    uVar10 = 0;
    if (piVar5[1] != 0) {
      do {
        param_3 = *(uint **)(*piVar5 + uVar10 * 8);
        (**(code **)(*param_3 + 0x28))(param_3,local_c0);
        (**(code **)(*param_3 + 0x38))(param_3,&local_50,&param_2);
        if ((((local_50 == local_3c[0]) && (local_4c == local_3c[1])) && (local_48 == local_3c[2]))
           && ((local_44 == iVar7 && (local_40 == local_10)))) {
          uVar6 = FUN_100a57c6(local_c0,local_88);
          pvVar3 = local_14;
          if (((char)uVar6 != '\0') && ((param_2 == iVar2 || (iVar2 == 0)))) {
            local_c = param_3;
            FUN_100a7b4d((void *)((int)local_14 + 0x44),*(int *)(*(int *)*piVar4 + 4 + uVar10 * 8));
            FUN_1009d806((void *)*piVar4,uVar10);
            uVar10 = *(uint *)((int)pvVar3 + 0x10);
            *(uint *)((int)pvVar3 + 0x10) = uVar10 - local_18;
            *(uint *)((int)pvVar3 + 0x14) =
                 (*(int *)((int)pvVar3 + 0x14) - local_1c) - (uint)(uVar10 < local_18);
            puVar1 = (undefined4 *)*piVar4;
            if (puVar1[1] == 0) {
              if (puVar1 != (undefined4 *)0x0) {
                thunk_FUN_100ad48c((LPVOID)*puVar1);
                FUN_100ad48c(puVar1);
              }
              FUN_1009d7a3((void *)((int)pvVar3 + 0x34),(uint *)&local_28);
            }
            break;
          }
        }
        piVar5 = (int *)*piVar4;
        uVar10 = uVar10 + 1;
      } while (uVar10 < (uint)piVar5[1]);
    }
  }
  LeaveCriticalSection(local_20);
  return local_c;
}


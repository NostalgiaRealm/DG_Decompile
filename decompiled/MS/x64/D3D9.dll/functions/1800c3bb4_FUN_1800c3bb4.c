/*
 * FUN_1800c3bb4 at 1800c3bb4
 * bool __fastcall FUN_1800c3bb4(longlong * param_1)
 * Address ranges: 1800c3bb4-1800c3d50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800c3bb4(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  
  if ((int)param_1[0x20] != 3) {
    lVar4 = (**(code **)(*(longlong *)param_1[0x1b] + 0x120))
                      ((longlong *)param_1[0x1b],(int)param_1[0x1d],
                       *(undefined4 *)((longlong)param_1 + 0xec),(int)param_1[0x1e],
                       *(undefined4 *)((longlong)param_1 + 0xfc),
                       *(undefined2 *)((longlong)param_1 + 0x3c),(int)param_1[0x20] == 2);
    param_1[0x1c] = lVar4;
  }
  if ((param_1[0x1c] != 0) || (bVar9 = false, (int)param_1[0x20] == 3)) {
    uVar3 = *(uint *)((longlong)param_1 + 0xf4) & 0x200;
    if ((uVar3 == 0) && ((int)param_1[0x20] == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x21) = uVar5;
    if ((uVar3 == 0) && ((int)param_1[0x20] == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    uVar3 = 0;
    if (*(short *)((longlong)param_1 + 0x3c) != 0) {
      do {
        local_48 = (undefined4)param_1[0x1f];
        bVar6 = (byte)uVar3;
        local_44 = (undefined4)param_1[4];
        uVar8 = (ulonglong)(*(uint *)(param_1 + 0x1d) >> (bVar6 & 0x1f));
        if (*(uint *)(param_1 + 0x1d) >> (bVar6 & 0x1f) == 0) {
          uVar8 = 1;
        }
        local_40 = *(undefined4 *)((longlong)param_1 + 0xf4);
        local_3c = (undefined4)param_1[0x20];
        local_34 = *(uint *)((longlong)param_1 + 0xec) >> (bVar6 & 0x1f);
        if (*(uint *)((longlong)param_1 + 0xec) >> (bVar6 & 0x1f) == 0) {
          local_34 = 1;
        }
        local_30 = *(uint *)(param_1 + 0x1e) >> (bVar6 & 0x1f);
        if (*(uint *)(param_1 + 0x1e) >> (bVar6 & 0x1f) == 0) {
          local_30 = 1;
        }
        local_38 = (undefined4)uVar8;
        cVar2 = (**(code **)(*param_1 + 0x28))
                          (param_1,uVar3,&local_48,CONCAT71((int7)(uVar8 >> 8),uVar5));
      } while ((cVar2 != '\0') && (uVar3 = uVar3 + 1, uVar3 < *(ushort *)((longlong)param_1 + 0x3c))
              );
    }
    bVar9 = uVar3 == *(ushort *)((longlong)param_1 + 0x3c);
    if (!bVar9) {
      for (iVar7 = uVar3 + 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        (**(code **)(*param_1 + 0x30))(param_1,iVar7);
      }
      puVar1 = (undefined8 *)param_1[0x1c];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      param_1[0x1c] = 0;
    }
  }
  return bVar9;
}


/*
 * FUN_1800067dc at 1800067dc
 * undefined __fastcall FUN_1800067dc(ulonglong param_1)
 * Address ranges: 1800067dc-180006998
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800067dc(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(char *)(param_1 + 0xd10) != '\0') {
    if (*(longlong *)(param_1 + 0x30) == 0) {
      local_30 = 0;
    }
    else {
      local_30 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) + 0x70);
    }
    if (*(longlong *)(param_1 + 0x38) == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x70);
    }
    if (*(longlong *)(param_1 + 0x40) == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 8) + 0x70);
    }
    if (*(longlong *)(param_1 + 0x48) == 0) {
      local_18 = 0;
    }
    else {
      local_18 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 8) + 0x70);
    }
    if (*(longlong *)(param_1 + 0x50) == 0) {
      local_10 = 0;
    }
    else {
      local_10 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 8) + 0x70);
    }
    uVar4 = 0;
    local_38 = param_1;
    if (*(longlong *)(param_1 + 0x67e8) == 0) {
      do {
        if (*(longlong *)(param_1 + 0x1338 + uVar4 * 8) != 0) {
          lVar2 = uVar4 * 0x84;
          lVar1 = (ulonglong)*(uint *)(param_1 + 0x7c4 + lVar2) * 3;
          if (((((&DAT_1800fdea0)[lVar1] != '\0') && (*(int *)(param_1 + 0x7c8 + lVar2) == 2)) ||
              (((&DAT_1800fdea1)[lVar1] != '\0' && (*(int *)(param_1 + 0x7cc + lVar2) == 2)))) ||
             (((((&DAT_1800fdea2)[lVar1] != '\0' && (*(int *)(param_1 + 0x828 + lVar2) == 2)) ||
               ((lVar1 = (ulonglong)*(uint *)(param_1 + 2000 + lVar2) * 3,
                (&DAT_1800fdea0)[lVar1] != '\0' && (*(int *)(param_1 + 0x7d4 + lVar2) == 2)))) ||
              ((((&DAT_1800fdea1)[lVar1] != '\0' && (*(int *)(param_1 + 0x7d8 + lVar2) == 2)) ||
               (((&DAT_1800fdea2)[lVar1] != '\0' && (*(int *)(param_1 + 0x82c + lVar2) == 2))))))))
          {
            FUN_18000699c(&local_38,(uint)uVar4);
          }
        }
        uVar3 = (uint)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < 8);
    }
    else {
      do {
        uVar3 = (uint)uVar4;
        if ((*(longlong *)(param_1 + 0x1338 + uVar4 * 8) != 0) &&
           ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x67e8) + 8) + 0x1214) >>
             (uVar3 & 0x1f) & 1) != 0)) {
          FUN_18000699c(&local_38,uVar3);
        }
        uVar4 = (ulonglong)(uVar3 + 1);
      } while (uVar3 + 1 < 0x10);
    }
    *(undefined1 *)(param_1 + 0xd10) = 0;
  }
  return;
}


/*
 * FUN_18005cad0 at 18005cad0
 * ulonglong __fastcall FUN_18005cad0(ulonglong * param_1, uint param_2)
 * Address ranges: 18005cad0-18005cb71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18005cad0(ulonglong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (ulonglong)param_2;
  if (param_2 != (uint)param_1[2]) {
    uVar2 = *(uint *)((longlong)param_1 + 0x14);
    *(undefined8 *)(*param_1 + uVar4 * 0x10) = 0;
    uVar3 = *param_1;
    if (param_2 == uVar2) {
      uVar2 = *(uint *)(uVar3 + 8 + uVar4 * 0x10);
      uVar3 = (ulonglong)uVar2;
      *(uint *)((longlong)param_1 + 0x14) = uVar2;
    }
    else {
      *(undefined4 *)(uVar3 + 0xc + (ulonglong)*(uint *)(uVar3 + 8 + uVar4 * 0x10) * 0x10) =
           *(undefined4 *)(uVar3 + 0xc + uVar4 * 0x10);
      uVar3 = *param_1;
      *(undefined4 *)(uVar3 + 8 + (ulonglong)*(uint *)(uVar3 + 0xc + uVar4 * 0x10) * 0x10) =
           *(undefined4 *)(uVar3 + 8 + uVar4 * 0x10);
      *(undefined4 *)(*param_1 + 0xc + uVar4 * 0x10) =
           *(undefined4 *)(*param_1 + 0xc + (ulonglong)*(uint *)((longlong)param_1 + 0x14) * 0x10);
      *(undefined4 *)(*param_1 + 8 + uVar4 * 0x10) = *(undefined4 *)((longlong)param_1 + 0x14);
      uVar3 = *param_1;
      *(uint *)(uVar3 + 0xc + (ulonglong)*(uint *)((longlong)param_1 + 0x14) * 0x10) = param_2;
      uVar5 = *param_1;
      if (*(int *)(uVar5 + 0xc + uVar4 * 0x10) != -1) {
        uVar4 = (ulonglong)*(uint *)(uVar5 + 0xc + uVar4 * 0x10);
        uVar3 = uVar4 * 2;
        *(uint *)(uVar5 + 8 + uVar4 * 0x10) = param_2;
      }
    }
    return uVar3;
  }
  uVar4 = 0;
  if ((int)param_1[2] != -1) {
    uVar4 = *(ulonglong *)(*param_1 + (ulonglong)(uint)param_1[2] * 0x10);
    *(undefined8 *)(*param_1 + (ulonglong)(uint)param_1[2] * 0x10) = 0;
    uVar2 = (uint)param_1[2];
    uVar3 = *param_1;
    uVar5 = (ulonglong)uVar2;
    uVar1 = *(uint *)(uVar3 + 0xc + uVar5 * 0x10);
    if ((uVar1 != 0xffffffff) && (*(longlong *)(uVar3 + (ulonglong)uVar1 * 0x10) != 0)) {
      *(uint *)(param_1 + 2) = uVar1;
      *(undefined4 *)(uVar3 + 0xc + uVar5 * 0x10) =
           *(undefined4 *)(uVar3 + 0xc + (ulonglong)*(uint *)((longlong)param_1 + 0x14) * 0x10);
      *(undefined4 *)(*param_1 + 8 + uVar5 * 0x10) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(uint *)(*param_1 + 0xc + (ulonglong)*(uint *)((longlong)param_1 + 0x14) * 0x10) = uVar2;
      uVar3 = *param_1;
      if (*(int *)(uVar3 + 0xc + uVar5 * 0x10) != -1) {
        *(uint *)(uVar3 + 8 + (ulonglong)*(uint *)(uVar3 + 0xc + uVar5 * 0x10) * 0x10) = uVar2;
      }
    }
  }
  return uVar4;
}


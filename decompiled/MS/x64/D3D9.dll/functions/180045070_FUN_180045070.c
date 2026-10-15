/*
 * FUN_180045070 at 180045070
 * byte __fastcall FUN_180045070(longlong param_1, undefined1 param_2, byte param_3)
 * Address ranges: 180045070-1800453ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180045070(longlong param_1,undefined1 param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  int local_res10 [2];
  undefined8 in_stack_ffffffffffffff98;
  longlong *plVar11;
  uint uVar12;
  undefined8 local_48;
  uint local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  uint local_20;
  
  uVar12 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,param_2);
  bVar6 = *(byte *)(param_1 + 0xf6c0) | *(byte *)(param_1 + 0xf689) | *(byte *)(param_1 + 0x1018c);
  bVar3 = 1;
  bVar9 = bVar6 | param_3;
  *(byte *)(param_1 + 0x1018c) = bVar9;
  lVar4 = 0x10128;
  if (*(int *)(param_1 + 0x10128) == 0) {
    lVar4 = 0x10150;
  }
  iVar2 = *(int *)(lVar4 + param_1);
  if (*(char *)(param_1 + 0x7662) == '\0') {
    uVar5 = *(int *)(param_1 + 0x10178) + iVar2;
  }
  else {
    uVar5 = (uint)(*(longlong *)(param_1 + 0xfcb8) != 0);
  }
  uVar8 = 0;
  if (bVar9 != 0) {
    uVar8 = uVar5;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xf6f8) + 0x1c8) != '\0') {
    bVar10 = 1;
    if ((param_3 == 0) ||
       (((*(uint *)(param_1 + 0x10130) | *(uint *)(param_1 + 0x10108)) & 0x10) == 0)) {
      bVar10 = 0;
    }
    lVar4 = *(longlong *)(param_1 + 0xf700);
    bVar1 = *(byte *)(param_1 + 0x1018e);
    bVar10 = bVar1 | bVar10;
    *(byte *)(param_1 + 0x1018e) = bVar10;
    uVar8 = uVar8 + (bVar10 != 0);
    if ((*(uint *)(lVar4 + 0x34) <
         *(int *)(*(longlong *)(lVar4 + 0x18) + 0x18 + (ulonglong)*(uint *)(lVar4 + 0x28) * 0x30) +
         uVar8) && ((bVar9 == 0 || (bVar10 == 0)))) {
      uVar8 = uVar5 + 1;
      *(byte *)(param_1 + 0x1018c) = bVar6 | 1;
      *(byte *)(param_1 + 0x1018e) = bVar1 | 1;
    }
  }
  if (uVar8 != 0) {
    plVar11 = &local_38;
    bVar3 = FUN_1800eb61c(*(longlong *)(param_1 + 0xf700),uVar8,
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500) + 0x18),
                          *(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 0xb78),plVar11
                         );
    uVar12 = (uint)((ulonglong)plVar11 >> 0x20);
    if (bVar3 == 0) goto LAB_1800453c3;
    lVar4 = *(longlong *)(param_1 + 0xff18);
    *(longlong *)(param_1 + 0xff18) = local_28;
    *(byte *)(param_1 + 0x1018a) = *(byte *)(param_1 + 0x1018a) | local_28 != lVar4;
    *(byte *)(param_1 + 0x1018d) = *(byte *)(param_1 + 0x1018d) | local_28 != lVar4;
    if ((local_28 != lVar4) && (uVar5 == 0)) {
      *(longlong *)(param_1 + 0xf9d0) = local_38;
      *(longlong *)(param_1 + 0xf9e8) = local_38;
    }
  }
  if (*(char *)(param_1 + 0x1018e) != '\0') {
    local_48 = *(undefined8 *)(param_1 + 0xf9a8);
    local_40 = *(int *)(param_1 + 0xa4) + 0xffU & 0xffffff00;
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6e8) + 0x88))
              ((longlong *)**(undefined8 **)(param_1 + 0xf6e8),&local_48);
    *(longlong *)(param_1 + 0xf9b0) = local_38;
    local_38 = local_38 + (ulonglong)local_20;
    local_30 = local_30 + (ulonglong)local_20;
    *(undefined1 *)(param_1 + 0x1019a) = 1;
  }
  if ((*(char *)(param_1 + 0x1018c) != '\0') && (uVar5 != 0)) {
    if (*(char *)(param_1 + 0x7662) == '\0') {
      local_res10[0] = *(int *)(param_1 + 0x10178);
      if (local_res10[0] != 0) {
        (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6e8) + 0xb8))
                  ((longlong *)**(undefined8 **)(param_1 + 0xf6e8),1,&local_30,local_res10,
                   CONCAT44(uVar12,local_res10[0]),param_1 + 0xfa98,&DAT_180102050,0);
      }
      *(longlong *)(param_1 + 0xf9d0) = local_38;
      if (iVar2 != 0) {
        uVar7 = (ulonglong)(local_20 * *(int *)(param_1 + 0x10178));
        local_38 = local_38 + uVar7;
        local_30 = local_30 + uVar7;
        local_res10[0] = iVar2;
        (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6e8) + 0xb8))
                  ((longlong *)**(undefined8 **)(param_1 + 0xf6e8),1,&local_30,local_res10,iVar2,
                   param_1 + 0xfbd8,&DAT_180102050,0);
      }
      *(longlong *)(param_1 + 0xf9e8) = local_38;
    }
    else if (*(longlong *)(param_1 + 0xfcb8) != 0) {
      (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6e8) + 0xc0))
                ((longlong *)**(undefined8 **)(param_1 + 0xf6e8),1,local_30,
                 *(undefined8 *)(param_1 + 0xfb18),(ulonglong)uVar12 << 0x20);
      *(longlong *)(param_1 + 0xf9d0) = local_38;
    }
  }
LAB_1800453c3:
  *(byte *)(param_1 + 0xf689) = *(byte *)(param_1 + 0xf689) & (bVar3 ^ 1);
  *(byte *)(param_1 + 0xf6c0) = *(byte *)(param_1 + 0xf6c0) & (bVar3 ^ 1);
  return bVar3;
}


/*
 * FUN_180008498 at 180008498
 * uint __cdecl FUN_180008498(longlong param_1, ulonglong param_2, uint param_3, uint * param_4)
 * Address ranges: 180008498-180008947
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180008498(longlong param_1,ulonglong param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  
  uVar3 = (uint)param_2;
  bVar1 = FUN_180009768(param_1);
  if ((bVar1 & 1) == 0) {
    return 0;
  }
  uVar8 = 0;
  if (uVar3 < 0x2b) {
    if ((0x419dffffff2U >> (param_2 & 0x3f) & 1) == 0) {
      if ((uVar3 < 0x29) && ((0x1a000000008U >> (param_2 & 0x3f) & 1) != 0)) {
        uVar8 = 8;
      }
      else if ((uVar3 < 0x27) && ((0x4000000004U >> (param_2 & 0x3f) & 1) != 0)) {
        uVar8 = 0x10;
      }
      else if (uVar3 == 0x22) {
        uVar8 = 0x18;
      }
    }
    else {
      uVar8 = 4;
    }
  }
  if (param_4 == (uint *)0x0 || param_3 < uVar8) {
    return 0;
  }
  switch(uVar3) {
  case 1:
    local_58 = 0x10;
    break;
  case 2:
    param_4[0] = 5;
    param_4[1] = 6;
    param_4[2] = 5;
    param_4[3] = 8;
    return uVar8;
  case 3:
    if (*(char *)(param_1 + 100) == '\0') {
LAB_1800085d8:
      param_4[0] = 0;
      param_4[1] = 0;
      return uVar8;
    }
    FUN_1800643e0((uint *)(param_1 + 0x60));
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))();
    if (cVar2 == '\0') {
      uVar7 = 0;
      uVar3 = 0;
    }
    else {
      fVar10 = FUN_180037fb0();
      uVar7 = (int)(fVar10 * 65536.0) << 8;
      uVar3 = (int)(fVar10 * 65536.0) & 0xffffff;
    }
    *param_4 = uVar7;
    param_4[1] = uVar3;
    goto LAB_1800085cc;
  case 4:
    local_58 = 0x40;
    break;
  case 5:
  case 10:
    local_58 = 0x100;
    break;
  case 6:
    local_58 = 0x21f;
    break;
  case 7:
    local_58 = 0x70;
    break;
  case 8:
    if (*(char *)(param_1 + 100) == '\0') goto switchD_18000855c_caseD_10;
    FUN_1800643e0((uint *)(param_1 + 0x60));
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb0))();
    *param_4 = (uint)(cVar2 != '\0');
    goto LAB_1800085cc;
  case 9:
  case 0xf:
  case 0x11:
    local_58 = 1;
    break;
  case 0xb:
    local_58 = 3;
    break;
  case 0xc:
    uVar3 = FUN_18000a930(param_1);
    if ((&DAT_18006f279)[(ulonglong)uVar3 * 0x20] == '\0') {
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x30) + 0x82b);
      goto LAB_180008664;
    }
LAB_180008654:
    local_58 = 0;
    break;
  case 0xd:
    uVar3 = FUN_18000a930(param_1);
    if ((&DAT_18006f279)[(ulonglong)uVar3 * 0x20] != '\0') goto LAB_180008654;
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x30) + 0x82f);
    goto LAB_180008664;
  case 0xe:
    uVar3 = FUN_18000a930(param_1);
    if ((&DAT_18006f279)[(ulonglong)uVar3 * 0x20] == '\0') goto LAB_180008654;
    local_58 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x82f) +
               *(int *)(*(longlong *)(param_1 + 0x30) + 0x82b);
    break;
  case 0x10:
  case 0x23:
switchD_18000855c_caseD_10:
    *param_4 = 0;
    return uVar8;
  case 0x12:
    local_58 = 6;
    break;
  case 0x13:
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x30) + 0x833);
LAB_180008664:
    local_58 = *puVar4;
    break;
  case 0x14:
    if (*(char *)(param_1 + 100) == '\0') goto switchD_18000855c_caseD_10;
    FUN_1800643e0((uint *)(param_1 + 0x60));
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xe8))();
    *param_4 = uVar3;
    goto LAB_1800085cc;
  case 0x15:
    uVar3 = FUN_18000a930(param_1);
    puVar5 = &DAT_18006f270;
    goto LAB_180008720;
  case 0x16:
    uVar3 = FUN_18000a930(param_1);
    puVar5 = &DAT_18006f274;
LAB_180008720:
    local_58 = *(uint *)(puVar5 + (ulonglong)uVar3 * 0x20);
    break;
  case 0x17:
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))(*(longlong **)(param_1 + 0x18),&local_60)
    ;
    local_58 = local_5c;
    break;
  case 0x18:
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))(*(longlong **)(param_1 + 0x18),&local_60)
    ;
    local_58 = local_54;
    break;
  case 0x19:
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))(*(longlong **)(param_1 + 0x18),&local_60)
    ;
    local_58 = local_50;
    break;
  case 0x1a:
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))(*(longlong **)(param_1 + 0x18),&local_60)
    ;
    local_58 = local_48;
    break;
  case 0x1b:
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))(*(longlong **)(param_1 + 0x18),&local_60)
    ;
    local_58 = local_40;
    break;
  case 0x1c:
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))(*(longlong **)(param_1 + 0x18),&local_60)
    ;
    local_58 = local_3c;
    break;
  default:
    goto LAB_180008930;
  case 0x1e:
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))(*(longlong **)(param_1 + 0x18),&local_60)
    ;
    local_58 = local_60;
    break;
  case 0x1f:
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))(*(longlong **)(param_1 + 0x18),&local_60)
    ;
    local_58 = local_38;
    break;
  case 0x20:
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1f8))(*(longlong **)(param_1 + 0x18),&local_60)
    ;
    break;
  case 0x22:
    if (*(char *)(param_1 + 100) == '\0') {
      param_4[2] = 0;
      param_4[3] = 0;
      param_4[0] = 0;
      param_4[1] = 0;
      param_4[4] = 0;
      param_4[5] = 0;
      return uVar8;
    }
    FUN_1800643e0((uint *)(param_1 + 0x60));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x128))(*(longlong **)(param_1 + 0x18),param_4);
    goto LAB_1800085cc;
  case 0x24:
  case 0x2a:
    local_58 = 8;
    break;
  case 0x25:
    if (*(char *)(param_1 + 100) == '\0') goto LAB_1800085d8;
    FUN_1800643e0((uint *)(param_1 + 0x60));
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x98))();
    *param_4 = uVar3;
    lVar9 = *(longlong *)(param_1 + 0x18);
    fVar10 = FUN_180037fb0();
    param_4[1] = (int)(fVar10 * (float)(*(int *)(lVar9 + 0xa8) - 1));
    goto LAB_1800085cc;
  case 0x26:
    if (*(char *)(param_1 + 100) == '\0') {
      param_4[2] = 0;
      param_4[3] = 0;
      *param_4 = 0;
      param_4[1] = 0;
      return uVar8;
    }
    FUN_1800643e0((uint *)(param_1 + 0x60));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x268))
              (*(longlong **)(param_1 + 0x18),param_4,param_4 + 1,param_4 + 2,param_4 + 3);
LAB_1800085cc:
    FUN_1800643d0((uint *)(param_1 + 0x60));
    return uVar8;
  case 0x27:
    uVar6 = 0xffff00000000;
    goto LAB_180008928;
  case 0x28:
    uVar6 = 0xffff;
LAB_180008928:
    *(undefined8 *)param_4 = uVar6;
    goto LAB_180008930;
  }
  *param_4 = local_58;
LAB_180008930:
  return uVar8;
}


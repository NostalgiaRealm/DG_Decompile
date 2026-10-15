/*
 * FUN_10026bb9 at 10026bb9
 * int __fastcall FUN_10026bb9(void * param_1)
 * Address ranges: 10026bb9-10026cee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10026bb9(void *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ushort in_FPUControlWord;
  uint local_14;
  uint *local_10;
  uint *local_c;
  undefined1 local_5;
  
  FUN_10023df9(&local_5);
  local_10 = &local_14;
  local_c = (uint *)CONCAT22(local_c._2_2_,in_FPUControlWord);
  local_14 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_14 = (uint)in_FPUControlWord;
    local_c = (uint *)(in_FPUControlWord & 0xf0ff | 0x23f);
  }
  iVar4 = -0x7789ff1f;
  if ((((&DAT_1006c49c)[*(int *)((int)param_1 + 0x11c) * 0x228] == '\0') ||
      ((*(uint *)((int)param_1 + 0x104) >> 4 & 1) != 0)) &&
     (iVar4 = 0, *(char *)((int)param_1 + 0x109) == '\0')) {
    uVar3 = 0;
    if (*(uint *)((int)param_1 + 300) != 0) {
      do {
        if (iVar4 < 0) goto LAB_10026cc8;
        if (*(int *)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x128) + uVar3 * 4) + 4) + 0xb0) != 0
           ) {
          iVar4 = -0x7789ff60;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)((int)param_1 + 300));
      if (iVar4 < 0) goto LAB_10026cc8;
    }
    if (*(int *)((int)param_1 + 0xfc) != 0) {
      iVar4 = -0x7fffbffb;
      cVar1 = (**(code **)(**(int **)((int)param_1 + 0x118) + 0x78))(*(int *)((int)param_1 + 0xfc));
      if (cVar1 != '\0') {
        (**(code **)(**(int **)((int)param_1 + 0x118) + 0x70))
                  (*(undefined4 *)((int)param_1 + 0xfc),1,1);
        FUN_100044ed((int *)((int)param_1 + 0x10));
        uVar2 = FUN_10024b65(param_1,*(undefined4 *)((int)param_1 + 0x120));
        if ((char)uVar2 != '\0') {
          FUN_10026aeb((int)param_1);
          iVar4 = 0;
        }
      }
    }
  }
LAB_10026cc8:
  local_c = &local_14;
  FUN_10023e27();
  return iVar4;
}


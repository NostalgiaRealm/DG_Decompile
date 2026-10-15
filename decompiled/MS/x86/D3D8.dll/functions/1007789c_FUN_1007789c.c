/*
 * FUN_1007789c at 1007789c
 * uint * __thiscall FUN_1007789c(void * this, uint * param_1, int param_2, int param_3, int param_4, uint param_5, int param_6, byte param_7, byte param_8, byte param_9, byte param_10)
 * Address ranges: 1007789c-10077da5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __thiscall
FUN_1007789c(void *this,uint *param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
            byte param_7,byte param_8,byte param_9,byte param_10)

{
  bool bVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  bVar3 = param_8;
  uVar5 = param_5;
  puVar2 = param_1;
  uVar6 = (uint)CONCAT11(param_7,param_8);
  if (((((param_4 == 0x1b) || (param_4 == 0x1c)) || (param_4 == 0x17)) ||
      ((param_4 == 0x18 || (param_4 == 9)))) || (local_18 = 0, param_4 == 0xb)) {
    local_18 = 2;
  }
  if (((param_4 == 0x46) || (param_4 == 0x47)) ||
     ((param_4 == 0x49 ||
      (((param_4 == 0x4a || (param_4 == 0x4c)) || (local_14 = 0, param_4 == 0x4d)))))) {
    local_14 = 4;
  }
  if ((param_4 == 0x44) || (local_10 = 0, param_4 == 0x45)) {
    local_10 = 8;
  }
  _param_8 = 0x20;
  uVar7 = 10;
  uVar4 = 0x10;
  if (((param_4 == 0x36) || (param_4 == 0x22)) ||
     ((param_4 == 10 || (((param_4 == 0x29 || (param_4 == 0x10)) || (local_c = 0, param_4 == 2))))))
  {
    local_c = 0x20;
  }
  if ((param_4 != 0x38) && (param_4 != 0x21)) {
    _param_8 = 0;
  }
  bVar1 = true;
  if (((param_5 == 0x1b) || (param_5 == 0x1c)) ||
     ((param_5 == 0x17 || (((param_5 == 0x18 || (param_5 == 9)) || (param_5 = 0, uVar5 == 0xb))))))
  {
    param_5 = 1;
  }
  if (((uVar5 == 0x36) || (uVar5 == 0x22)) ||
     (((uVar5 == 10 || ((uVar5 == 0x29 || (uVar5 == 0x10)))) || (param_1 = (uint *)0x0, uVar5 == 2))
     )) {
    param_1 = (uint *)&DAT_00000010;
  }
  if ((uVar5 != 0x38) && (uVar5 != 0x21)) {
    uVar4 = 0;
  }
  local_18 = uVar4 | (uint)param_1 | _param_8 | local_c | param_5 | local_10 | local_14 | local_18;
  *puVar2 = 0;
  if (5 < local_18) {
    if (local_18 == 8) {
      uVar5 = 0;
      if (*(char *)((int)this + 0x1cef8) != '\0') {
        uVar5 = 2;
      }
      uVar7 = (((((uint)param_10 | -(uint)(bVar3 != 0 || param_7 != 0) & 8) << 2 | uVar5 |
                (uint)param_9) << 3 | uVar6 & 0xff) * 2 | (uint)param_7) << 7 | 0x80000007;
LAB_10077d9b:
      *puVar2 = uVar7;
      return puVar2;
    }
    if (local_18 == 9) {
      uVar5 = 0;
      if (*(char *)((int)this + 0x1cef8) != '\0') {
        uVar5 = 2;
      }
      uVar5 = (((((uint)param_10 | -(uint)(bVar3 != 0 || param_7 != 0) & 8) << 2 | uVar5 |
                (uint)param_9) << 3 | uVar6 & 0xff) * 2 | (uint)param_7) << 7 | 0x80000017;
    }
    else {
      if (((local_18 != 0x12) && (local_18 != 0x21)) && (local_18 != 0x30)) {
        return puVar2;
      }
      uVar5 = 0;
      if (*(char *)((int)this + 0x1cef8) != '\0') {
        uVar5 = 2;
      }
      uVar5 = (((((uint)param_10 | -(uint)(bVar3 != 0 || param_7 != 0) & 8) << 2 | uVar5 |
                (uint)param_9) << 3 | uVar6 & 0xff) * 2 | (uint)param_7) << 7 | 0x80000025;
    }
    goto LAB_10077c48;
  }
  if (local_18 == 5) {
    uVar5 = 0;
    if (*(char *)((int)this + 0x1cef8) != '\0') {
      uVar5 = 2;
    }
    uVar5 = (((((uint)param_10 | -(uint)(bVar3 != 0 || param_7 != 0) & 8) << 2 | uVar5 |
              (uint)param_9) << 3 | uVar6 & 0xff) * 2 | (uint)param_7) << 7 | 0x80000016;
    goto LAB_10077c48;
  }
  if (local_18 != 0) {
    if (local_18 == 1) {
      if (((&DAT_100b04d4)[param_3] == '\0') || ((&DAT_100b04d4)[param_2] == '\0')) {
        uVar5 = 2;
      }
      else {
        uVar5 = 0;
      }
      uVar7 = 0;
      if (*(char *)((int)this + 0x1cef8) != '\0') {
        uVar7 = 2;
      }
      uVar6 = (((param_10 | uVar5) << 2 | uVar7 | (uint)param_9) << 3 | uVar6 & 0xff) * 2 |
              (uint)param_7;
      uVar5 = *(uint *)(&DAT_100b0560 + param_2 * 4) & 0xf;
    }
    else {
      if (local_18 == 2) {
        if (uVar5 != 0x3c) {
          if ((param_7 == bVar3) && (param_9 == 0)) {
            bVar1 = false;
          }
          uVar5 = 0xfffc0008;
          if (bVar3 == 0 && param_7 == 0) {
            uVar5 = 0xfffc0000;
          }
          uVar4 = 0;
          if (*(char *)((int)this + 0x1cef8) != '\0') {
            uVar4 = 2;
          }
          uVar7 = 6;
          if (bVar1) {
            uVar7 = (param_6 != 0) + 3;
          }
          uVar7 = ((((param_10 | uVar5) << 2 | uVar4 | (uint)param_9) << 3 | uVar6 & 0xff) * 2 |
                  (uint)param_7) << 7 | uVar7;
        }
        goto LAB_10077d9b;
      }
      if (local_18 != 3) {
        if (local_18 != 4) {
          return puVar2;
        }
        uVar5 = 0;
        if (*(char *)((int)this + 0x1cef8) != '\0') {
          uVar5 = 2;
        }
        uVar5 = (((((uint)param_10 | -(uint)(bVar3 != 0 || param_7 != 0) & 8) << 2 | uVar5 |
                  (uint)param_9) << 3 | (uint)bVar3) * 2 | (uint)param_7) << 7 | 0x80000006;
        goto LAB_10077c48;
      }
      if ((param_7 == bVar3) && (param_9 == 0)) {
        bVar1 = false;
      }
      uVar5 = 0;
      if (*(char *)((int)this + 0x1cef8) != '\0') {
        uVar5 = 2;
      }
      uVar6 = ((((uint)param_10 | -(uint)(bVar3 != 0 || param_7 != 0) & 8) << 2 | uVar5 |
               (uint)param_9) << 3 | uVar6 & 0xff) * 2 | (uint)param_7;
      uVar5 = 6;
      if (bVar1) {
        uVar5 = (param_6 != 0) + 3;
      }
    }
    uVar5 = uVar6 << 7 | uVar5 | 0x80000010;
    goto LAB_10077c48;
  }
  if (uVar5 == 0x3c) {
    if (param_4 == 0x3c) {
      uVar5 = 0;
      if (*(char *)((int)this + 0x1cef8) != '\0') {
        uVar5 = 2;
      }
      uVar5 = (uVar5 | param_9 | 0xfff00000) << 0xb;
      goto LAB_10077c23;
    }
    uVar5 = 3;
  }
  else {
    uVar5 = 0;
    if (*(char *)((int)this + 0x1cef8) != '\0') {
      uVar5 = 2;
    }
    uVar5 = ((((param_10 | 0xfffc0000) << 2 | uVar5 | (uint)param_9) << 3 | uVar6 & 0xff) * 2 |
            (uint)param_7) << 7;
LAB_10077c23:
    uVar5 = uVar5 | *(uint *)(&DAT_100b0560 + param_2 * 4) & 0xf;
  }
  *puVar2 = uVar5;
  if (param_2 != param_3) {
    return puVar2;
  }
  if (-1 < (int)uVar5) {
    return puVar2;
  }
  uVar5 = uVar5 | 0x20000;
LAB_10077c48:
  *puVar2 = uVar5;
  return puVar2;
}


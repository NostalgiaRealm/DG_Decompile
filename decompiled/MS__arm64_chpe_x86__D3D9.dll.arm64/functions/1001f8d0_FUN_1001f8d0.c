/*
 * FUN_1001f8d0 at 1001f8d0
 * undefined FUN_1001f8d0(void)
 * Address ranges: 1001f8d0-1001fadb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001f8d0(int param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (((((((*param_2 == 0) || (*param_2 != *(int *)(param_1 + 0x48))) ||
         (param_2[1] != *(int *)(param_1 + 0x4c))) ||
        (((param_2[2] != *(int *)(param_1 + 0x50) || (param_2[0xd] != *(int *)(param_1 + 0x7c))) ||
         ((param_2[3] != *(int *)(param_1 + 0x54) ||
          ((param_2[4] != *(int *)(param_1 + 0x58) || (param_2[5] != *(int *)(param_1 + 0x5c))))))))
        ) || ((param_2[6] != *(int *)(param_1 + 0x60) ||
              (((param_2[0xe] != *(int *)(param_1 + 0x80) ||
                (param_2[0x10] != *(int *)(param_1 + 0x88))) ||
               (param_2[0x11] != *(int *)(param_1 + 0x8c))))))) ||
      (((param_2[0x12] != *(int *)(param_1 + 0x90) || (param_2[0x13] != *(int *)(param_1 + 0x94)))
       || (((param_2[0x14] != *(int *)(param_1 + 0x98) ||
            ((param_2[0x15] != *(int *)(param_1 + 0x9c) ||
             (param_2[0x16] != *(int *)(param_1 + 0xa0))))) ||
           (param_2[0x18] != *(int *)(param_1 + 0xa8))))))) ||
     ((((param_2[0x19] != *(int *)(param_1 + 0xac) ||
        ((char)param_2[0x1b] != *(char *)(param_1 + 0xb4))) ||
       (*(char *)((int)param_2 + 0x6d) != *(char *)(param_1 + 0xb5))) ||
      (uVar1 = 1, *(char *)((int)param_2 + 0x6e) != *(char *)(param_1 + 0xb6))))) {
    uVar1 = 0;
  }
  return uVar1;
}


FROM gcc:latest
WORKDIR /usr/src/proiect-sincretic
COPY proiect-sincretic.cpp .
RUN gcc -o proiect-sincretic proiect-sincretic.cpp -lstdc++
CMD ["./proiect-sincretic"]